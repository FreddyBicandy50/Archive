
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_word_count(char *str, char *sep)
{
	int i;
	int j;
	int total_len = 0;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				i++;
				break;
			}
			j++;
		}
		total_len++;
		i++;
	}
	return total_len;
}

int ft_strlen(char *str, char *sep, int *index)
{
	int len = 0;
	int i = *index;
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				printf("len=%d\n", len);
				*index = i + 1; // Move index to next character after separator
				return len;
			}
			j++;
		}
		len++;
		i++;
	}
	return len;
}

char **ft_split(char *str, char *charset)
{
	char **tab;
	int i;
	int index;
	int word_count = ft_word_count(str, charset) + 1;
	tab = malloc(sizeof(char *) * (word_count));
	if (tab == NULL)
		return (NULL);
	i = 0;
	index = 0;
	 while (i < word_count) {
        int len = ft_strlen(str, charset, &index);
        tab[i] = malloc(sizeof(char) * (len + 1));
        i++;
    }
	return tab;
}

int main(void)
{
	int i;
	char *message = "Hello|World,How are~you";
	char *seperators = "| ,~";
	char **result = ft_split(message, seperators);
	result{
		0 {     }
		2 {     }
		3 {   }
		4 {  }
		5 {  }
		6 0
	}
	if (result == NULL)
		printf("Memorie Allocation Failed");
	else
	{
		i = 0;
		while (result[i] != 0)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	return (0);
}