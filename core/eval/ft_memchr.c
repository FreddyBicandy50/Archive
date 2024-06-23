/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarraj <hsarraj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:14:45 by hsarraj           #+#    #+#             */
/*   Updated: 2024/06/23 17:14:47 by hsarraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int x, size_t size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	c;

	i = 0;
	s = (unsigned char *)str;
	c = (unsigned char)x;
	while (i < size)
	{
		if (s[i] == c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
