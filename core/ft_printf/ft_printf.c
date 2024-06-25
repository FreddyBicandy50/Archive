/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:49:53 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/25 14:13:20 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"



int ft_printf(const char *input, ...)
{
	va_list args;

	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (*input == 'X')
				ft_putnbr_hex_fd(va_arg(args, unsigned int), 1);
			if (*input == 'x')
				ft_putnbr_hex_fd(va_arg(args, unsigned int), 0);
			if (*input == 'u')
				ft_putnbr_fd(va_arg(args, unsigned int), 1);
			else if (*input == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (*input == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (*input == 'c')
				ft_putchar_fd((char)va_arg(args, int), 1);
			else if (*input == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (*input == '%')
				ft_putchar_fd('%', 1);
		}
		else
			ft_putchar_fd(*input, 1);
		input++;
	}
	va_end(args);
	return (0);
}

int main(void)
{
	unsigned int hex = 0xABC123;

	hex = 0xABC123;
	ft_printf("%X\n", hex);
	hex = 0xabc111;
	ft_printf("%x\n", hex);
	return (0);
}
