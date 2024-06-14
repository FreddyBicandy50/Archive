/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:05:49 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/14 21:52:24 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (size != 0)
	{
		while (i < (int)size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
