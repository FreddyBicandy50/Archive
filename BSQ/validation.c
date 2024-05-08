
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

void map_validation(char **map, int lines, int width)
{
	int i;
	int j;

	i = 1;
	while (i < lines)
	{
		j = 0;
		while (map[i][j] !='\0')
		{
			j++;
		}
		if(j+1 != width)
		{
			pt_str("Line Width does not match !");
			exit(-1);
		}
		i++;
	}
}

//TODO:check the fillables
//TODO:check the line numbers
//TODO:check the h number and validate it 

