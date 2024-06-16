#include <unistd.h>

void repeat_alpha(char *str)
{
	int i;
	char charset = 'a';
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				charset = 'a';
			if (str[i] >= 'A' && str[i] <= 'Z')
				charset = 'A';
			while (charset <= str[i])
			{
				write(1, &str[i], 1);
				charset++;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}