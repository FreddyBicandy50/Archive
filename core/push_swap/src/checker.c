/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:58:43 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/08 17:12:07 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_size(char **tabs)
{
	size_t size;

	size = 0;
	if (!tabs)
		return (0);
	while (tabs[size])
		size++;
	return (size);
}

int found(int number, int *saved, int target)
{
	int i;

	for (i = 0; i < target; i++)
	{
		if (saved[i] == number)
			return (1);
	}
	return (0);
}

int invalid_int(char *s)
{
	int i;
	int j;
	char *result;

	i = 0;
	while (s[i])
		i++;
	result = ft_itoa(ft_atoi(s));
	if (!result)
		return (1);
	j = 0;
	while (result[j])
		j++;
	free(result);
	if (i != j)
		return (1);
	return (0);
}

int ft_isduplicate(char **argv, int argc)
{
	int i;
	int *saved;

	saved = (int *)malloc(sizeof(int) * argc);
	if (!saved)
	{
		perror("malloc error");
		exit(-1);
	}
	i = 0;
	while (i < argc)
	{
		int number = ft_atoi(argv[i]);
		if (found(number, saved, i))
		{
			free(saved);
			return (1);
		}
		saved[i] = number;
		i++;
	}
	free(saved);
	return (0);
}