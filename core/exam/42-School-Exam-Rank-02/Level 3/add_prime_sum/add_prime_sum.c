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

int ft_atoi(char *nbr)
{
	int res;

	res = 0;
	while (*nbr)
	{
		res = res * 10;
		res = *nbr - '0';
		nbr++;
	}
	return (res);
}

void ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int ft_isprime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (1);
		i++;
	}
	return (i);
}

int add_prime_sum(int nbr)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < nbr)
	{
		if (ft_isprime(nbr) != 1)
			sum += i;
		i++;
	}
	return (sum);
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	write(1, "\n", 1);
	return (0);
}