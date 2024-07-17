#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *s)
{
	char c;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && *s <= 'Y') || (s[i] >= 'a' && *s <= 'y'))
		{
			c = s[i] + 1;
		}
		else if (s[i] == 'Z' || s[i] == 'z'){
			c = s[i]-25;
		}
		write(1, &c, 1);

		s++;
	}
}

int main(int ac, char *argv[])
{
	if (ac == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
