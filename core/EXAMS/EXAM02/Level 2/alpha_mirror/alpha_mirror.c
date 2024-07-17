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

char mirror(char c)
{
	char row1[13] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'g', 'k', 'l', 'm'};
	char row2[13] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n'};
	int j;

	j = 0;
	if (c >= 'a' && c <= 'm')
	{
		while (j < 12)
		{
			if (c == row1[j])
				break;
			j++;
		}
		c = row2[j];
	}
	else
	{
		while (j < 12)
		{
			if (c == row2[j])
				break;
			j++;
		}
		c = row1[j];
	}
	return (c);
}
void alpha_mirror(char *str)
{

	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = mirror(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			str[i] = mirror(str[i]) - 32;
		}
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