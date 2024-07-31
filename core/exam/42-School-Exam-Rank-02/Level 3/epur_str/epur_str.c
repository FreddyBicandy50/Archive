// #include <unistd.h>

// int main(int argc, char const *argv[])
// {
// 	int i;
// 	int flg;

// 	if (argc == 2)
// 	{
// 		i = 0;
// 		while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i += 1;
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] == ' ' || argv[1][i] == '\t')
// 				flg = 1;
// 			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
// 			{
// 				if (flg)
// 					write(1, " ", 1);
// 				flg = 0;
// 				write(1, &argv[1][i], 1);
// 			}
// 			i += 1;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>

void ft_enpur(char *message)
{
	int flag = 0;

	while (*message != '\0')
	{

		if (*message == ' ' || *message == '\t')
			flag = 1;
		else
		{
			if (flag)
			{
				write(1, " ", 1);
				flag = 0;
			}
			write(1, message, 1);
		}
		message++;
	}
}

int main(void)
{
	char *message = " this        time it      will     be    more complex  . ";

	ft_enpur(message);
	return (0);
}