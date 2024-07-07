/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:06:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/07 16:04:09 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *buffer;
	static char *temp;
	char *line;
	static size_t bytes_read;

	//prepare to invade
	if (!buffer || !temp)
	{
		temp = malloc(1);
		buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	}
	if (fd <= 0 || !buffer)
		return (NULL);
	line = malloc(1);
	if (!line || !temp)
		return (NULL);
	
	//read the first chunk
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	temp = ft_strjoin(temp, buffer);
	
	//what if this chunck doesn't have a newline!
	while (!is_line(buffer))
	{
		//keepreading till you find
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
		
		if (bytes_read <= 0) // Or you dont
		{
			free(buffer);
			return (NULL);
		}
		temp = ft_strjoin(temp, buffer);
	}
	//find a line within all Merged chuncks
	line = ft_get_line(temp);
	//trim the line and save the leftovers
	temp = ft_bufftrim(temp);
	return (line);
}

int main(void)
{
	int fd;
	int i;
	char *getline;

	i = 0;
	fd = open("file.txt", O_RDONLY);

	printf("%s\n", get_next_line(fd));

	return (0);
}
