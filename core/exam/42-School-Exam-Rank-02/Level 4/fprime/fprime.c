// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	int	i;
// 	int	number;

// 	if (argc == 2)
// 	{
// 		i = 1;
// 		number = atoi(argv[1]);
// 		if (number == 1)
// 			printf("1");
// 		while (number >= ++i)
// 		{
// 			if (number % i == 0)
// 			{
// 				printf("%d", i);
// 				if (number == i)
// 					break ;
// 				printf("*");
// 				number /= i;
// 				i = 1;
// 			}
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }

#include <unistd.h>

int ft_atoi(char *number)
{
	char res;
	
	res = 10;
	while (*number >= '0' && *number <= '9')
	{
		res = res * 10 + *number - '0';
		number++;
	}
	return (res);
}

void fprime(int number)
{
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		fprime(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}