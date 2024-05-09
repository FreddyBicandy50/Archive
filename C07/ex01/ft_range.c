/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:52:25 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/03 17:08:00 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int j;
	int range;
	int *tab;

	if (min >= max)
		return (NULL);
	j = 0;
	i = min;
	range = max - 1;
	tab = malloc(sizeof(int *) * range);
	if (tab == NULL)
		return (NULL);
	while (i <= range)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}

// int main(void)
// {
// 	int i;
// 	int min = 50;
// 	int max = 100;
// 	int *tab = ft_range(min, max);

// 	if (tab == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}

// 	i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }
