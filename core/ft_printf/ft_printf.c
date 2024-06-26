/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:14:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/25 22:12:11 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft/libft.h"

void	formatter(va_list args, char input)
{
	char	*str;

	if (input == 'X')
		ft_putnbr_hex_fd(va_arg(args, unsigned int), 1);
	else if (input == 'x')
		ft_putnbr_hex_fd(va_arg(args, unsigned int), 0);
	else if (input == 'u')
		ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (input == 'i' || input == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (input == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
	else if (input == 's')
	{
		str = va_arg(args, char *);
		if (str)
			ft_putstr_fd(str, 1);
		else
			ft_putstr_fd("(null)", 1);
	}
	else if (input == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *PARAM, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, PARAM);
	count = 0;
	i = 0;
	while (PARAM[i] != '\0')
	{
		if (PARAM[i] == '%')
		{
			i++;
			formatter(args, PARAM[i]);
		}
		else
			ft_putchar_fd(PARAM[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

