/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:19:02 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/24 21:58:30 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[j] != '\0')
		j++;
	while (n < nb)
	{
		if (src[i] != '\0')
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		n++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[20] = "fredy";
// 	char	*str2 = "fredy";
// 	char	*s = ft_strncat(str1, str2, 5);
// 	printf("\n");
// 	while(*s != '\0'){
// 		write(1,s,1);
// 		s++;
// 	}
// }
