#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_word_count(char *str)
{
	int i;
	int isword = 0;
	int word_count;
	int len;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		isword = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\t')
		{
			isword = 1;
			i++;
		}
		if (isword)
			word_count++;
		i++;
	}
	return (word_count);
}

char **ft_split(char *str)
{
	int word_count = ft_word_count(str);
	int i;
	int j;
	int k;
	int len;
	char **tab = malloc(sizeof(char *) * (word_count + 1));
	if (tab == NULL)
		return NULL;

	i = 0;
	k = 0;
	while (i < word_count)
	{
		len = 0;
		while (str[k] == ' ' || str[k] == '\t')
			k++;
		while (str[k] != ' ' && str[k] != '\t')
		{
			len++;
			k++;
		}
		tab[i] = malloc(sizeof(char *) * (len + 1));
		i++;
	}

	i = 0;
	j = 0;
	k = 0;
	while (i < word_count)
	{
		j = 0;
		while (str[k] == ' ' || str[k] == '\t')
			k++;
		while (str[k] != ' ' && str[k] != '\t')
		{
			tab[i][j] = str[k];
			j++;
			k++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int main()
{
	char *message = " Hello  world  My  name is  fredy bicandy ";
	char **res = ft_split(message);
	int i;

	i = 0;
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
}