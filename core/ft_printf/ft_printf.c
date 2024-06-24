/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:49:53 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/24 22:14:39 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;

	while (*input != '\0')
	{
		va_start(args, input);
		if (*input == '%')
		{
			input++;
			if (*input == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			if (*input == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
			if (*input == 'c')
				ft_putchar_fd((char)va_arg(args, int), 1);
			if (*input == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
		}
		else
			ft_putchar_fd(*input, 1);
		input++;
	}
	va_end(args);
	return (0);
}

// int main(void)
// {
// 	char first_name = 'f';
// 	char *lastname = "bicandy";
// 	char *option1 = "FBI";
// 	char *option2 = "CANDY";
// 	int foutry_two = 42;
// 	int age = 23;
// 	ft_printf("Hello %i my name is=%c%s and i
// have=%d (yrs old)\n\t\t\"IT NOT %s,OR %s\"\n",
// foutry_two, first_name, lastname,age, option1, option2);
// 	return (0);
// }
