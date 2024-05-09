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
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}
int total_len(int size, char **strs, char *sep)
{
	int len;
	int sep_len;
	int i = 0;

	i = 0;
	len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	sep_len *= (size - 1);
	return (sep_len + len);
}
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *tab;

	tab = malloc(sizeof(char *) * total_len(size, strs, sep) + 1);
	if (tab == NULL)
		return (NULL);
	if (size <= 0)
	{
		tab[0] = '\0';
		return (tab);
	}
	i = 0;
	tab[0] = '\0';
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if(i != size -1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

int main(void)
{
	char *strs[] = {"Hello", "World", "How", "are", "you"};
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
