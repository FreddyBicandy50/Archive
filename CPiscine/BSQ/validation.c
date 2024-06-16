
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

void mapWidth_validation(char **map, int lines, int width)
{
	int i;
	int j;

	i = 1;
	while (i <= lines - 1)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			j++;
		}
		if (j + 1 != width)
		{
			pt_str("Line Width does not match !");
			exit(-1);
		}
		i++;
	}
}

int get_number(char *firstline)
{
	int nb;

	int i;
	long num;
	num = 0;
	i = 0;
	while (firstline[i] >= '0' && firstline[i] <= '9' && i < ft_strlen(firstline) - 3)
	{
		num = num * 10 + (firstline[i] - '0');
		i++;
	}
	return (num);
}

int valid(char *check)
{
	int i;

	i = 0;
	while (*check >= '0' && *check <= '9' && i <= ft_strlen(check) - 4)
	{
		check++;
		i++;
	}
	if (!(*check >= '0' && *check <= '9'))
		return (0);
	return (1);
}

// TODO:check the line numbers
void mapHeight_validation(char *firstline, long lines)
{
	long number;

	number = get_number(firstline);
	if (!valid(firstline))
	{
		pt_str("Too Few fillables");
		exit(-1);
	}

	if (number != lines - 1)
	{
		pt_str("number of height different than the input");
		exit(-1);
	}
}

// TODO:check the fillables
void mapfillables_validation(char *str)
{

	while (*str != '\0')
	{

		if (*str < 32 || *str > 126)
		{
			pt_str("Error Non Printable Fillable");
			exit(-1);
		}
		str++;
	}
	return;
}

void map_validation(char **map, int lines, int width, char *fillable)
{
	int i;
	int j;

	i = 1;
	while (i <= lines - 1)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (!(map[i][j] == fillable[0] || map[i][j] == fillable[1] || map[i][j] == fillable[2]))
			{
				pt_str("MAP HAVE A NON FILLABLE ITEM");
				exit(-1);
			}
			j++;
		}
		i++;
	}
}
