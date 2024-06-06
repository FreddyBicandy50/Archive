#include <unistd.h>
void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
char *rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] == 'Z')
				str[i] = 'A';
			else
				str[i] += 1;
		i++;
	}
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(rotone(argv[1]));
	}

	write(1, "\n", 1);
	return (0);
}