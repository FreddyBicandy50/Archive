/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:49:53 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/25 20:07:46 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
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

int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	count;

	va_start(args, input);
	count = 0;
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			formatter(args, *input);
		}
		else
			ft_putchar_fd(*input, 1);
		input++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	char first_name = 'f';
// 	char *lastname = "bicandy";
// 	unsigned int num = 255;
// 	unsigned int num2 = 123456;

// 	ft_printf("Character: %c\n", first_name);
// 	ft_printf("String: %s\n", lastname);
// 	ft_printf("Hex (lower): %x\n", num);
// 	ft_printf("Hex (upper): %X\n", num2);

// 	return 0;
// }