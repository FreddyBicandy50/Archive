/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarraj <hsarraj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:16:05 by hsarraj           #+#    #+#             */
/*   Updated: 2024/06/23 17:16:07 by hsarraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	numofword(char const *s, char c)
{
	int	count;

	count = 0;
	if (! *s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;
	size_t	len;

	i = 0;
	lst = (char **)malloc ((numofword(s, c) + 1) * sizeof(char *));
	if (!lst || !s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!(ft_strchr(s, c)))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
