/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:40:31 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/01 18:00:50 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	else
		return (0);
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(3));
// 	return (0);
// }
