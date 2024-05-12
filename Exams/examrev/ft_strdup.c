#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *src)
{
	int len;
	len = 0;
	while (src[len] != '\0')
		len++;
	return len;
}

char *ft_strdup(char *src)
{
	char *dest;
	int i;

	dest = malloc(sizeof(char *) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		dest[i]=src[i];
		i++;
	}
	return dest;
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%s\n",ft_strdup(argv[1]));
	return 0;
}