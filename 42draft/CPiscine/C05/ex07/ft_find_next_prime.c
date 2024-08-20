/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:32:19 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/04 18:12:36 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_next_prime(int nb)
{
	int	i;
	int	is_prime;

	nb++;
	while (1)
	{
		is_prime = 1;
		i = 2;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				is_prime = 0;
				break ;
			}
			i++;
		}
		if (is_prime)
			return (nb);
		nb++;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_next_prime(7));
// }
