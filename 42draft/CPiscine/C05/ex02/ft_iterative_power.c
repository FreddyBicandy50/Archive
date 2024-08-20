/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:00:55 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/01 18:00:19 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
	}
	else
		return (0);
	return (result);
}

// int	main(void)
// {
// 	int	power = 3;
// 	int	nb = 2;

// 	printf("%d", ft_iterative_power(nb, power));
// 	return (0);
// }
