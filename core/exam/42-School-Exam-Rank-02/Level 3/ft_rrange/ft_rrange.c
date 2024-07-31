#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int n = 0;

	while (*str)
	{
		n = n * 10;
		n = n + *str - '0';
		str++;
	}

	return n;
}

void ft_putnbr(int nbr)
{
	char n;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	n = nbr % 10 + '0';
	write(1, &n, 1);
}

int ft_abs(int start, int end)
{
	int res = start - end;
	if (res < 0)
		return -res;
	return res;
}

int *ft_rrange(int start, int end)
{
	int i, len;
	int *res;

	len = ft_abs(start, end) + 1;
	res = (int *)malloc(sizeof(int) * len);
	if (!res)
		return NULL;

	i = 0;
	if (start > end)
	{
		while (start >= end)
			res[i++] = start--;
	}
	else
	{
		while (start <= end)
			res[i++] = start++;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int *res, i, size;

	if (argc == 3)
	{
		int start = ft_atoi(argv[1]);
		int end = ft_atoi(argv[2]);

		res = ft_rrange(start, end);
		if (!res)
			return 1; // Handle malloc failure

		size = ft_abs(start, end);
		for (i = 0; i <= size; i++)
		{
			ft_putnbr(res[i]);
			write(1, " ", 1); // Add space between numbers
		}

		free(res); // Free the allocated memory
	}

	write(1, "\n", 1);
	return 0;
}
