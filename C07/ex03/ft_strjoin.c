/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:46:49 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/04 22:24:14 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **strs, int size)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return len;
}

int ft_seplen(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *tab;
	int i;
	int j;
	(void)**strs;
	(void)*sep;

	if (size <= 0)
	{
		tab = malloc(1);
		if (tab == NULL)
			return (NULL);
		return (tab);
		tab = '\0';
	}
	tab = malloc(sizeof(char *) * (ft_strlen(strs, size) + (ft_seplen(sep) * size - 2) + 1));
	while (strs[i])
	{
		int j = 0;
		while (strs[i][j] != '\0')
		{
			printf("%c", strs[i][j]);
		}
		i++;
	}
	return (tab);
}

int main(void)
{
	char *strs[] = {"Hello", "World", "How", "are", "you"};
	char *st = {"Hello, World, How, are, you"};
	(void)st;
	char *sep;
	int size;

	size = 5;
	sep = ", ";

	char *result = ft_strjoin(size, strs, sep);
	if (result == NULL)
		printf("Memorie allocation failed!");
	else
	{
		if (result[0] == '\0')
			printf("empty string\n");
		else
			printf("%s", result);
	}
	free(result);
	return (0);
}
