/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:46:49 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/02 11:22:12 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (*temp);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *result;
	int i;
	int length;

	if (size <= 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		*result = '\0';
		return (result);
	}
	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += (size - 1) * ft_strlen(sep);
	result = malloc(length + 1);
	*result = '\0';
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		*result = ft_strcat(result, strs[i]);
		if (i != 5)
		{
			*result = ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	char	*strs[] = {"Hello", "World", "my", "name", "is", "freddy"};
	char	*sep;
	int		size;

	size = 6;
	sep = ", ";

	char	*result = ft_strjoin(size, strs, sep);
	if (result == NULL)
	{
		printf("Malloc Failed!");
	}
	else
	{
		printf("%s", result);
	}
	free(result);
	return (0);
}
