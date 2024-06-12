/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:05:42 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/07 22:41:11 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>



int ft_seperator(char *seperator, char *character)
{
	while (*seperator != '\0')
	{
		if (*character == *seperator)
			return (1);
		seperator++;
	}
	return (0);
}

int ft_word_count(char *str, char *charset)
{
	int i;
	int word_count;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (ft_seperator(charset, &str[i]))
		{
			word_count++;
			i = i + ft_seperator_count(charset);
		}
		i++;
	}

	return (word_count + 1);
}

int ft_strlen(char *str, char *seperator)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		if (ft_seperator(seperator, &str[length]))
			return (length);
		length++;
	}
	return (length);
}

char **ft_strdup(char **split, char *str, char *charset, int word_count)
{
	int j;
	int i;
	int k;

	i = 0;
	j = 0;
	while (j < word_count)
	{
		split[j] = malloc(sizeof(char *) * ft_strlen(&str[i], charset) + 1);
		k = 0;
		while (str[i])
		{
			if (!ft_seperator(charset, &str[i]))
			{
				split[j][k] = str[i];
				k++;
				i++;
			}
			else
			{
				split[j][i] = '\0';
				i = i + ft_seperator_count(charset);
				break;
			}
		}
		j++;
	}
	split[word_count] = NULL;
	return (split);
}

char **ft_split(char *str, char *charset)
{
	int word_count;
	char **split;

	word_count = ft_word_count(str, charset);
	split = malloc(sizeof(char *) * word_count + 1);
	ft_strdup(split, str, charset, word_count);
	return (split);
}

// int main(void)
// {
// 	char *message = "Hello/, World/, my/, name/, is/, freddy/, Bicandy";
// 	char *seperator = "/, ";
// 	char **res = ft_split(message, seperator);
// 	int i;

// 	i = 0;
// 	while (res[i] != NULL)
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}

// 	return (0);
// }
