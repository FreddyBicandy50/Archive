/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* main.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:45:12 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/06 22:31:49 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "ft.h"

void print_map(char **map, int lines)
{
	int i;

	i = 0;
	while (i < lines)
	{
		pt_str(map[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{

	char **table;
	char *file_char;
	int *row_len;
	int file_size;
	int lines;
	int width;
	int i;

	file_size = ft_filebytes(1, argv[1]);
	lines = nbofrows(file_size);
	row_len = (int *)malloc(sizeof(int) * lines);
	if (row_len == NULL)
		exit(-1);

	file_char = (char *)malloc(sizeof(char) * (file_size + 1));
	row_size(row_len, lines, file_size);
	if (file_char == NULL)
		return (0);

	if (read_file(file_char, file_size) < 0)
		return (0);

	table = (char **)malloc(sizeof(char *) * lines);
	if (table == NULL)
		return (0);

	i = 0;
	while (i < lines)
	{
		table[i] = (char *)malloc(sizeof(char) * row_len[i]);
		if (table[i] == NULL)
			return (0);
		i++;
	}
	ft_fillrows(table, file_char, lines);
	width = line_width(table, lines);
	//TODO:
	map_validation(table, lines, width);

	//TODO convert the numbers

	print_map(table, lines);

	//SOLVE

	printf("file_size=%d\n", file_size);
	printf("height=%d\n", lines);
	printf("width=%d\n", width);

	return (0);
}