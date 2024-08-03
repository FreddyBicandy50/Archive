// #include <stdlib.h>
// #include <stdio.h>

// char *ft_strncpy(char *s1, char *s2, int n)
// {
// 	int i = -1;

// 	while (++i < n && s2[i])
// 		s1[i] = s2[i];
// 	s1[i] = '\0';
// 	return (s1);
// }

// char **ft_split(char *str)
// {
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;
// 	int wc = 0;

// 	// walk threw str
// 	while (str[i])
// 	{
// 		// skip all spaces and tabs and newlines
// 		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 			i++;
// 		// is not finished
// 		if (str[i])
// 			wc++; // found a word
// 		// loop in that word
// 		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
// 			i++;
// 		// keep doing that until we have how many words
// 	}

// 	// lets now cut them
// 	char **out = (char **)malloc(sizeof(char *) * (wc + 1)); // create 2D array in the size of word counts

// 	i = 0;
// 	// reset the i and loop again
// 	while (str[i])
// 	{
// 		// skip spaces /tabs/newlines
// 		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 			i++;
// 		j = i; // assign j to the index of the first letter of each word
// 		// find its last letter also
// 		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
// 			i++;
// 		// if we found a word means i=5 > j=1 ? we have a word of 5 letters
// 		if (i > j)
// 		{
// 			// yeah
// 			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1)); // allocate in the index of k size of the captured word
// 			// send the 2D array +1 and the str with the addres of first letter of the word and the last letter
// 			ft_strncpy(out[k++], &str[j], i - j);
// 		}
// 	}
// 	out[k] = NULL;
// 	return (out);
// }

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int slug(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char *skip(char *str)
{
	while (*str && (slug(*str)))
		str++;
	return (str);
}

int ft_wordcount(char *str)
{
	int i = 0;
	int wc = 0;

	while (str[i] != '\0')
	{
		str = skip(str);
		if (!slug(*str))
			wc++;
		while (str[i] && !slug(str[i]))
		{
			str = skip(str);
			i++;
		}
		i++;
	}
	return (wc);
}

char **ft_split(char *str)
{
	int i = 0, j = 0;
	int wc = ft_wordcount(str);
	char **tab;

	tab = (char **)malloc(sizeof(char *) * wc + 1);
	if (tab == NULL)
		return (NULL);
	printf("%d\n", wc);
	while (str[i] != '\0')
	{
		str = skip(str);
		j = i;
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;
	char **res;
	argv[1] = "      Hello World my name is freddy and i love Jesus ";
	argc = 2;
	if (argc == 2)
	{
		res = ft_split(argv[1]);
		// i = 0;
		// while (res[i] != NULL)
		// {
		// 	printf("%s\n", res[i]);
		// 	i++;
		// }
	}
	write(1, "\n", 1);
	return 0;
}