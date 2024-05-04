/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:24:14 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/01 17:10:45 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else
		return (0);
	return (result);
}

// int main(void)
// {
// 	int power = 3;
// 	int nb = 2;

// 	printf("%d", ft_recursive_power(nb, power));
// 	return (0);
// }
