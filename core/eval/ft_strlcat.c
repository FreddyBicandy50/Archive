/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:37:26 by anrivera          #+#    #+#             */
/*   Updated: 2024/06/19 13:42:39 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_ln;
	size_t	src_ln;
	size_t	i;
	size_t	j;

	src_ln = ft_strlen(src);
	dst_ln = ft_strlen(dst);
	j = dst_ln;
	i = 0;
	if (dst_ln < size -1 && size > 0)
	{
		while (src[i] && dst_ln + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_ln >= size)
		dst_ln = size;
	return (dst_ln + src_ln);
}
