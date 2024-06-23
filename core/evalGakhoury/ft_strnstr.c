/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakhoury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:34:03 by gakhoury          #+#    #+#             */
/*   Updated: 2024/06/22 14:42:22 by gakhoury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			little_len;
	unsigned int	i;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len < little_len)
		return (NULL);
	while (i <= len - little_len && big[i] != '\0')
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
