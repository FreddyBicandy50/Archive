/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:53:56 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/01 18:00:09 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}

// int	main(void)
// {
// 	printf("%d", ft_fibonacci(5));
// 	return (0);
// }
