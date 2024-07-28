// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	rotone(char *s)
// {
// 	while (*s)
// 	{
// 		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
// 			ft_putchar(*s + 1);
// 		else if (*s == 'Z' || *s == 'z')
// 			ft_putchar(*s - 25);
// 		else
// 			ft_putchar(*s);
// 		++s;
// 	}
// }

// int		main(int ac, char **av)
// {
// 	if (ac == 2)
// 		rotone(av[1]);
// 	ft_putchar('\n');
// 	return (0);
// }

#include <unistd.h>

void rotone(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			if (*str == 'z' || *str == 'Z')
				*str = *str - 25;
			else
				*str = *str + 1;
		}
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}