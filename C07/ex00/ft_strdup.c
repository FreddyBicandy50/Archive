/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:27:58 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/01 19:51:26 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *src)
{
	int length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	return (length);
}

char *ft_strdup(char *src)
{
	char *dup;
	int i;

	dup = malloc(sizeof(char *) * ft_strlen(src) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main(void)
{
	char *message;

	message = "message";
	char *res = ft_strdup(message);
	while (*res != '\0')
	{
		printf("%c", *res);
		res++;
	}
	return (0);
}
