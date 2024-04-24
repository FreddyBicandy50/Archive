/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:19:02 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/23 22:32:00 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	total_size;

	dest_size = ft_length(dest);
	src_size = ft_length(src);
	total_size = dest_size + src_size;
	if (size <= dest_size)
	{
		return (src_size + size);
	}
	while (*src && dest_size < size - 1)
	{
		dest[dest_size] = *src;
		src++;
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (total_size);
}

// int main(void)
// {
// 	char str1[20] = "Ali";
// 	char *str2;
// 	char *s = ft_strlcat(str2, str1, 8);
// 	while (*s != '\0')
// 	{
// 		write(1, s, 1);
// 		s++;
// 	}
// }
