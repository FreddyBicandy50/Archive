/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:49:23 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/16 23:37:24 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] != '\0' && i < len)
	{
		printf("[%ld]%c\n", i, s[start]);
		i++;
		start++;
	}
	return ("test");
}

int main(void)
{
	char *message = "Hello World!";
	ft_substr(message, 13, 12);
	return (0);
}
