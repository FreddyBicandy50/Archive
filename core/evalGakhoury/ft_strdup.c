/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakhoury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:34:38 by gakhoury          #+#    #+#             */
/*   Updated: 2024/06/11 10:41:05 by gakhoury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(len * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}
