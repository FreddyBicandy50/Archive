/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:31:51 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/19 10:22:05 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(char first_digit, char second_digit, char third_digit)
{
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
	write(1, &third_digit, 1);
	if (!(first_digit == '7' && second_digit == '8' && third_digit == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	second_digit = '1';
	while (first_digit <= '9')
	{
		while (second_digit <= '9')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				print_digits(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
		second_digit = first_digit + 1;
	}
}
