/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:53:59 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/12 17:13:55 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *ft_strcpy(char *s1, char *s2)
// {
// 	int i = 0;

// 	while (s2[i] != '\0')
// 	{
// 		s1[i] = s2[i];
// 		i++;
// 	}
// 	s1[i] = '\0';
// 	return (s1);
// }

#include "unistd.h"
#include <stdlib.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2 && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char *src = "Freddy";
	char *dest;

	dest=malloc(11 * sizeof(char));
	dest=ft_strcpy(dest,src);
	while (*dest != '\0')
	{
		write(1,dest,1);
		dest++;
	}
}






