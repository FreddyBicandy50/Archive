#include "ft_stock_str.h"
#include "ft_show_tab.c"
#include "stdlib.h"

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char *ft_strcpy(char *src)
{
	int i;
	char *dest;

	dest = malloc(sizeof(char *) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *tab;

	tab = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strcpy(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return tab;
}

int main(void)
{
	char *message[] = {"Hello", "World", "jesus", "has", "been", "risen"};
	int size;

	size = 6;
	ft_show_tab(ft_strs_to_tab(size, message));
}