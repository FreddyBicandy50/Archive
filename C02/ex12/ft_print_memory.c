/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:29:43 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/27 15:31:44 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	if (c >= 32 && c <= 126)
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, ".", 1);
	}
}

void	print_hex(unsigned char c)
{
	char	*hex;
	
	*hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_memory_line(void *addr, unsigned int size)
{
	int	i;

	i = 0;
	write(1, " ", 1);
	while (i < 16)
	{
		if (i < size)
		{
			print_char(((char *)addr)[i]);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	remainder;

	remainder = size;
	i = 0;
	while (i < size)
	{
		if (remainder >= 16)
		{
			print_memory_line(addr + i, 16);
			remainder -= 16;
		}
		else
		{
			print_memory_line(addr + i, remainder);
		}
		i++;
	}
	return (addr);
}
