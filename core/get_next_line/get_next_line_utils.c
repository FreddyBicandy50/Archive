/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:49:07 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/08 21:46:58 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (!result)
		return (NULL);
	while (i < (size_t)ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (size_t) ft_strlen(s2))
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + ft_strlen(s2)] = '\0';
	return (result);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dup;

	if (s == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d < s)
	{
		while (i < (int)n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = (int)n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
