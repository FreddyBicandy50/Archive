#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int main(void)
{
    char str[] = "Hello World";
    printf("%s\n", ft_strrev(str));
    return (0);
}