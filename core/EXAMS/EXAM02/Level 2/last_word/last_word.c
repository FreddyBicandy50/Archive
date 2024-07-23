#include <unistd.h>

// void	last_word(char *str)
// {
// 	int j = 0;
// 	int i = 0;

// 	while (str[i])
// 	{
// 		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
// 			j = i + 1;
// 		i++;
// 	}
// 	while (str[j] >= 33 && str[j] <= 127)
// 	{
// 		write(1, &str[j], 1);
// 		j++;
// 	}
// }

void last_word(char *str)
{
	int i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\0')
		i--;
	while (i > 0 && (str[i] != ' ' && str[i] != '\t'))
		i--;
	if (str[i] == ' ')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
