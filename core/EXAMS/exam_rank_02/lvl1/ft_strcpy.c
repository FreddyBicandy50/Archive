/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:11:04 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/11 22:14:12 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int main(void)
// {
// 	char *source;
// 	char *dest;

// 	source = "Hello World";
// 	dest=(char *)malloc(11 * sizeof(char));
// 	dest= ft_strcpy(dest, source);
	
// 	printf("%s",dest);
// 	return (0);
// }