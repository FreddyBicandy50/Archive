/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarraj <hsarraj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:16:24 by hsarraj           #+#    #+#             */
/*   Updated: 2024/06/23 17:16:27 by hsarraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	int		i;
	char	c;

	i = 0;
	c = (char)x;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
