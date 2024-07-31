#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *res;
	int i, len;

	len = abs(start - end) + 1;
	res=(int *)malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}

int main(int argc,char *argv[])
{
	int *res;
	int i;
	int start = 0, end = 3;

	res = ft_range(start, end);
	i = 0;
	while (i < (abs(start - end) + 1))
	{
		printf("%d", res[i]);
		i++;
	}
	return (0);
}