#include <unistd.h>
#include <stdio.h>

// int main(int argc, char **argv)
// {
// 	int i = 0;

// 	if (argc == 2)
// 	{
// 		while(argv[1][i])
// 		{
// 			if(argv[1][i] >= 65 && argv[1][i] <= 90)
// 				argv[1][i] = 90 - argv[1][i] + 65;
// 			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
// 				argv[1][i] = 122-argv[1][i] + 97;
// 			write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write (1,"\n",1);
// 	return (0);
// }

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}