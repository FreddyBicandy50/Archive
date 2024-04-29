/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:40:31 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/25 22:02:50 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb > 0)
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
	}
	else
		return (0);
	return (result);
}

int	main(void)
{
	printf("%d",ft_iterative_factorial(3));
	return (0);
}
