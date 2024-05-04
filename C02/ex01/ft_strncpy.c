/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:25:38 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/23 20:04:05 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i;
	char 			*temp;

	i = 0;
	temp = dest;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest=temp;
	return (dest);
}

int main(void)
{
	char src[] = "Hakuna matata!";
	char dest[20];
	unsigned int n = 14;
	ft_strncpy(dest, src, n);
	printf("Copied string: %s\n", dest);
	return (0);
}