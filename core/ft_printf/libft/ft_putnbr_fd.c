/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:41:10 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/26 15:42:28 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	char	n;

	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return ;
	}
	if (nbr < 0)
	{
		ft_putstr_fd("-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, 1);
	n = nbr % 10 + '0';
	ft_putchar_fd(n, fd);
}
