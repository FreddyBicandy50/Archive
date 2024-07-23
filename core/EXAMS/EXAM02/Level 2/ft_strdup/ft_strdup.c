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

char *ft_strdup(char *str)
{
	char *dup;
	int i;

	dup = (char *)malloc(sizeof(char) * ft_strlen(str) + 1 );
	if(!dup)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main(void)
{
	char *message = "NOFKHOU";
	char *res;

	res = ft_strdup(message);
	while (*res != '\0')
	{
		write(1,res,1);
		res++;
	}
	return (0);
}