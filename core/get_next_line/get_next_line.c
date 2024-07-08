/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:54:21 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/08 21:46:16 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*join(char *temp, char *buffer, char *remaining)
{
	if (!remaining)
		temp = ft_strjoin("", buffer);
	else
		temp = ft_strjoin(remaining, buffer);
	free(remaining);
	return (temp);
}

char	*isline(char *newline_pos, char *remaining)
{
	char	*line;

	if (newline_pos)
	{
		*newline_pos = '\0';
		line = ft_strdup(remaining);
		ft_memmove(remaining, newline_pos + 1, ft_strlen(newline_pos + 1) + 1);
		return (line);
	}
	return (NULL);
}

char	*find_line(char **remaining, int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*newline_pos;
	char	*line;
	char	*temp;
	ssize_t	bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
		temp = join(temp, buffer, *remaining);
		*remaining = temp;
		newline_pos = ft_strchr(*remaining, '\n');
		if (newline_pos)
			return (isline(newline_pos, *remaining));
	}
	if (*remaining && **remaining != '\0')
	{
		line = ft_strdup(*remaining);
		free(*remaining);
		*remaining = NULL;
		return (line);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*remaining;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = find_line(&remaining, fd);
	return (line);
}

// int main(void)
// {
// 	char *line;
// 	int fd;

// 	fd = open("file.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("open");
// 		return (1);
// 	}

// 	while ((line = get_next_line(fd)))
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 	}

// 	close(fd);

// 	return (0);
// }