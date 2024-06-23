/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:08:41 by anrivera          #+#    #+#             */
/*   Updated: 2024/06/22 13:02:27 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	word_total;
	size_t	new_word;
	size_t	i;

	word_total = 0;
	new_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && new_word == 0)
		{
			new_word = 1;
			word_total++;
		}
		if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (word_total);
}

static void	free_mem(char **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (arr[i])
			free (arr[i]);
		i++;
	}
	free (arr);
}

static size_t	len_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**split(const char *s, char c, char **arr, size_t word)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < word)
	{
		while (s[j] && s[j] == c)
			j++;
		arr[i] = ft_substr(s, j, len_word(&s[j], c));
		if (!arr[i])
		{
			free_mem(arr, i);
			return (NULL);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	t_word;

	if (!s)
		return (NULL);
	t_word = word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (t_word + 1));
	if (!arr)
		return (NULL);
	arr = split(s, c, arr, t_word);
	return (arr);
}
