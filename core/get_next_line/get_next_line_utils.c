/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:49:37 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/07 15:13:20 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strjoin(char *s1, char *s2)
{
	size_t s1_len;
	size_t s2_len;
	size_t i;
	char *join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = (char *)malloc(s1_len + s2_len + 1);
	if (!join || !s1 || !s2)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		join[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		join[i] = *s2;
		s2++;
		i++;
	}
	join[i] = '\0';
	return (join);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_bufftrim(char *buffer)
{
	while (*buffer != '\0' && *buffer != '\n')
		buffer++;
	if(*buffer=='\n')
		buffer++;
	return (buffer);
}

int is_line(char *str)
{
	while (*str != '\0')
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char *ft_get_line(char *buffer)
{
	char *line;
	int buffsize;
	int i;

	buffsize = ft_strlen(buffer);
	line = (char *)malloc(sizeof(char) * buffsize + 1);
	if (!line)
		return (NULL);
	i = 0;
	line[buffsize] = '\0';
	while (buffer[i] != '\0')
	{
		line[i] = buffer[i];
		if (buffer[i] == '\n')
			break;
		i++;
	}
	return (line);
}
