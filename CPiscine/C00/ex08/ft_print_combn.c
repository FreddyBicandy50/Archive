/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:44:57 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/19 11:09:35 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(int arr[], int n)
{
	char	digit;
	int		i;

	i = 0;
	while (i < n)
	{
		digit = arr[i] + '0';
		write(1, &digit, 1);
		i++;
	}
}

void	generate_combinations(int arr[], int index, int n, int current)
{
	int	i;

	if (index == n)
	{
		print_combination(arr, n);
		if (arr[0] < 10 - n)
		{
			write(1, ", ", 2);
		}
		return ;
	}
	i = current;
	while (i < 10)
	{
		arr[index] = i;
		generate_combinations(arr, index + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
	{
		generate_combinations(arr, 0, n, 0);
	}
}
