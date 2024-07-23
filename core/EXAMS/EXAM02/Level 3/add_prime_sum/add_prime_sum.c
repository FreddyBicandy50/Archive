// #include <unistd.h>

// int	ft_atoi(char *s)
// {
// 	int	res = 0;

// 	while (*s)
// 		res = res * 10 + *s++ - 48;
// 	return (res);
// }

// int	is_prime(int num)
// {
// 	int	i = 2;

// 	if (num <= 1)
// 		return (0);
// 	while (i * i <= num)
// 	{
// 		if (num % i == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// void	put_nbr(int n)
// {
// 	if (n >= 10)
// 		put_nbr(n / 10);
// 	char digit = n % 10 + '0';
// 	write(1, &digit, 1);
// }

// int main(int ac, char **av)
// {

// 	if (ac == 2)
// 	{
// 		int	nbr = ft_atoi(av[1]);
// 		int	sum = 0;

// 		while (nbr > 0)
// 		{
// 			if (is_prime(nbr))
// 				sum += nbr;
// 			nbr--;
// 		}
// 		put_nbr(sum);
// 	}
// 	if (ac != 2)
// 		put_nbr(0);
// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>
#include <stdio.h>

int is_prime(int num)
{
	int i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int u_atoi(char *str)
{
	int res;

	if (!str)
		return (0);
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}
void ft_putnbr(int nbr)
{
	char res;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	res = nbr % 10 + '0';
	write(1, &res, 1);
}

void add_prime_sum(char *str)
{
	int nbr;
	int sum;
	int i;

	nbr = u_atoi(str);
	i = 1;
	sum = 0;
	while (i <= nbr)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	write(1, "\n", 1);
	return (0);
}
