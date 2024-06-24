/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:19:49 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/14 20:54:04 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
