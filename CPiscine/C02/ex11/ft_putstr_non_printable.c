/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:36 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/27 15:22:47 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*p;
	char			*hexa;

	p = (unsigned char *)str;
	hexa = "0123456789abcdef";
	while (*p != '\0')
	{
		if (*p >= ' ' && *p <= '~')
		{
			ft_putchar(*p);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hexa[*p / 16]);
			ft_putchar(hexa[*p % 16]);
		}
		p++;
	}
}
