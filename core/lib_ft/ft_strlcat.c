/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:51:00 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/14 23:08:27 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	dest_len;
	int	src_len;
	int	i;

	dest_len = 0;
	src_len = 0;
	while (dest_len < (int)size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if ((int)size <= dest_len)
		return ((int)size + src_len);
	i = 0;
	while (i < src_len && dest_len + i + 1 < (int)size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < (int)size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
