#include "ft_stock_str.h"
#include "stdlib.h"
#include "unistd.h"

int ft_strlen(char *str)
{
	int len;
	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char *ft_strdup(char *str)
{
	char *dest;
	int i;

	dest = malloc(sizeof(char *) * ft_strlen(str) + 1);
	if (dest == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

struct s_stock_str **ft_strs_to_tab(int ac, char **av)
{
	t_stock_str **tab = malloc(sizeof(t_stock_str *) * ac + 1);
	int i;

	i = 0;
	while (i < ac)
	{
		tab[i] = malloc(sizeof(t_stock_str *));
		tab[i]->str = av[i];
		tab[i]->size = ft_strlen(av[i]);
		tab[i]->copy = ft_strdup(tab[i]->str);
		i++;
	}
	tab[i] = NULL;
	return tab;
}

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

int main(void)
{
	char *message[] = {"Hello", "World", "jesus", "has", "been", "risen"};
	int size;

	size = 6;
	ft_show_tab(ft_strs_to_tab(size, message));
	return (0);
}