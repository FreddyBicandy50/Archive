/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakhoury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:48:34 by gakhoury          #+#    #+#             */
/*   Updated: 2024/06/12 14:54:33 by gakhoury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		inside;

	i = 0;
	count = 0;
	inside = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!inside)
			{
				inside = 1;
				count++;
			}
		}
		else
			inside = 0;
		i++;
	}
	return (count);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **str)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}

static char	**split(char const *s, char c, char **str, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < count)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(str + i) = ft_substr(s, j, get_word_len(&*(s + j), c));
		if (!*(str + i))
		{
			free_array(i, str);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(str + i) = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_strs(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}
