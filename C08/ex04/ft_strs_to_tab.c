#include "ft_stock_str.h"
#include "stdio.h"
#include "stdlib.h"

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char *ft_strdup(char *src)
{
	int i;

	i = 0;
	char *dest = malloc(sizeof(char *) * ft_strlen(src + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

struct s_stock_str **ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str **tab = malloc(sizeof(t_stock_str *) * ac + 1);

	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i] = malloc(sizeof(t_stock_str *));
		tab[i]->size = ft_strlen(av[i] + 1);
		tab[i]->str = av[i];
		tab[i]->copy = ft_strdup(tab[i]->str);
		i++;
	}
	tab[ac] = NULL;

	return (tab);
}

int main(void)
{
	char *message[] = {"Hello", "World", "We", "are", "Christians"};
	int size = 5;
	t_stock_str **result = ft_strs_to_tab(size, message);
	if (result == NULL)
	{
		printf("Memorie allocation Failed!");
		return (1);
	}
	int i = 0;
	while (result[i] != NULL)
	{
		printf("str=%s | ", result[i]->str);
		printf("size=%d | ", result[i]->size);
		printf("copy=%s\n", result[i]->copy);
		i++;
	}
	return 0;
}