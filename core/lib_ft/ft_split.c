/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:42:14 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/17 17:22:32 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_wordcount(const char *s, char c)
{
	size_t count = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return count;
}

static char *ft_strndup(const char *s, size_t n)
{
	char *copy = malloc(n + 1);
	if (!copy)
		return NULL;
	strncpy(copy, s, n);
	copy[n] = '\0';
	return copy;
}

char **ft_split(char const *s, char c)
{
	char **tab;
	size_t word_count;
	size_t i = 0;
	const char *word_start;

	if (!s)
		return NULL;

	word_count = ft_wordcount(s, c);
	tab = malloc((word_count + 1) * sizeof(char *));
	if (!tab)
		return NULL;

	while (*s)
	{ش
		if (*s != c)
		{
			word_start = s;
			while (*s && *s != c)
				s++;
			tab[i] = ft_strndup(word_start, s - word_start);
			if (!tab[i])
			{
				while (i > 0)
					free(tab[--i]);
				free(tab);
				return NULL;
			}
			i++;
		}
		else
		{
			s++;
		}
	}
	tab[i] = NULL;
	return tab;
}
