/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarraj <hsarraj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:14:52 by hsarraj           #+#    #+#             */
/*   Updated: 2024/06/23 17:14:54 by hsarraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && ((const unsigned char *)str1)[i]
			== ((const unsigned char *)str2)[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((int)((const unsigned char *)str1)[i]
			- (int)((const unsigned char *)str2)[i]);
}
