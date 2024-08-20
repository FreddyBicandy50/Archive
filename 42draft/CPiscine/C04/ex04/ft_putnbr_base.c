/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:12:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/04 17:43:17 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
		{
			return (0);
		}
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	return (1);
}

void	base_system(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		base_system(n / size, base, size);
	a = base[n % size];
	ft_putchar(a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (check_base(base) == 1)
	{
		while (base[s])
		{
			s++;
		}
		base_system(nbr, base, s);
	}
}
