/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakhoury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:14:18 by gakhoury          #+#    #+#             */
/*   Updated: 2024/06/10 16:26:28 by gakhoury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			src_len;
	size_t			copy_len;
	const char		*s;
	size_t			i;

	i = 0;
	src_len = 0;
	s = src;
	while (*s++)
		src_len++;
	if (size > 0)
	{
		if (src_len >= size)
			copy_len = size - 1;
		else
			copy_len = src_len;
		while (i < copy_len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[copy_len] = '\0';
	}
	return (src_len);
}
