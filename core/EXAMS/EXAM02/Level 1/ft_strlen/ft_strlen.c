

int ft_strlen(char *str)
{
	int len;

	while (str[len] != '\0')
		len++;

	return (len);
}