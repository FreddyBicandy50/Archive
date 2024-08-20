#include <unistd.h>
#include <stdio.h>

void ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void reverse(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		reverse(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
