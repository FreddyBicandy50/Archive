#include "ft_stock_str.h"
#include "stdlib.h"

void ft_putchar(char digit)
{
	write(1, &digit, 1);
	write(1, "\n", 1);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return;
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void ft_show_tab(struct s_stock_str **par)
{
	int i;

	i = 0;
	while (par[i] != NULL)
	{
		ft_putstr(par[i]->str);
		ft_putnbr(par[i]->size);
		ft_putstr(par[i]->copy);
		i++;
	}
}