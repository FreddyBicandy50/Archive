/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakhoury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:57:18 by gakhoury          #+#    #+#             */
/*   Updated: 2024/06/11 15:51:30 by gakhoury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != '\0' && (ft_strchr(set, *s1) != NULL))
		s1++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	trimmed_str = (char *)malloc(end + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strncpy(trimmed_str, s1, end);
	trimmed_str[end] = '\0';
	return (trimmed_str);
}
