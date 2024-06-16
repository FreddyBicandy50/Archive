/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:56:29 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/06 22:58:44 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
char *FILENAME;
int line_width(char **table,int lines)
{
	int j = 0;
	for (int i = 0; i < lines; i++)
	{
		j = 0;
		while (table[i][j] != '\0')
		{
			j++;
		}
	}
}

int nbofrows(int file_size)
{
	int fd;
	int row_nbr;
	char *file_char;
	int index;

	index = 0;
	fd = open(FILENAME, 0);
	if (fd == -1)
		return (0);
	row_nbr = 0;
	file_char = (char *)malloc(sizeof(char) * (file_size + 1));
	if (read(fd, file_char, file_size) < 0)
		return (0);
	while (file_char[index] != '\0')
	{
		if (file_char[index] == '\n')
			row_nbr++;
		index++;
	}
	close(fd);
	free(file_char);
	return (row_nbr);
}

int read_file(char *file_ptr, int read_count)
{

	int fd;
	fd = open(FILENAME, 0);
	if (fd == -1)
		return (0);
	if (read(fd, file_ptr, read_count) < 0)
		return (0);
	close(fd);
	return (1);
}

int row_size(int *rows, int row_count, int file_size, char *file_location)
{
	char *file_char;
	int index;
	int index2;
	int index3;
	file_char = (char *)malloc(sizeof(char) * (file_size + 1));

	if (file_char == NULL)
		return (0);
	if (read_file(file_char, file_size) < 0)
		if (read_file(file_char, file_size) < 0)
			return (0);
	index2 = 0;
	index3 = 0;
	while (index2 < row_count)
	{
		index = 0;
		while (file_char[index3] != '\n')
		{
			index3++;
			index++;
		}
		index3++;
		rows[index2++] = ++index;
	}
	free(file_char);
	return (1);
}

int ft_filebytes(int firstline_only, char *file_location)
{
	FILENAME = file_location;
	int fd;
	char buffer[256];
	int nread;
	int byte_count;
	fd = open(file_location, 0);
	if (fd == -1)
		return (0);
	nread = read(fd, buffer, sizeof(buffer));
	if (firstline_only)
		return (nread);
	while (nread > 0)
	{
		nread = read(fd, buffer, sizeof(buffer));
		byte_count = byte_count + nread;
	}
	close(fd);
	return (byte_count);
}

void ft_fillrows(char **rows, char *file_char, int row_count)
{
	int index;
	int index2;
	int index3;

	index = 0;
	index3 = 0;
	while (index < row_count)
	{
		index2 = 0;
		while (file_char[index3] != '\n')
		{
			rows[index][index2] = file_char[index3];
			index2++;
			index3++;
		}
		rows[index][index2 + 1] = '\0';
		index3++;
		index2 = 0;
		index++;
	}
}
