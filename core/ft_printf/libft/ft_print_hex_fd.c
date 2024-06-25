/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:28:48 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/25 14:14:37 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_hex_fd(unsigned int num, int upper)
{
	char	*hex_digits;
	char	hex[9];
	int		i;

	hex_digits = "0123456789abcdef";
	i = 8;
	hex[i] = '\0';
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return ;
	}
	while (num > 0)
	{
		if (upper)
			hex[--i] = ft_toupper(hex_digits[num % 16]);
		else
			hex[--i] = hex_digits[num % 16];
		num /= 16;
	}
	ft_putstr_fd(&hex[i], 1);
}
