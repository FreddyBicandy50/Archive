#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main(void)
{
	char *s1 = "!Hello";
	char *s2 = "Hello";

	if (ft_strcmp(s1, s2) != 0)
		printf("DONT MATCH\n");
	else
		printf("MATCH\n");
	return (0);
}