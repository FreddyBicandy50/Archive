#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int len = abs(end - start) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	int step = (start < end) ? 1 : -1;
	int i = 0;

	if (!res)
		return NULL;
	while (i < len)
	{
		res[i] = start;
		start += step;
		i++;
	}
	return res;
}

// Testing the function
int main()
{
	int start = 10;
	int end = 5;
	int *range = ft_range(start, end);
	int len = abs(end - start) + 1;

	if (range)
	{
		for (int i = 0; i < len; i++)
			printf("%d ", range[i]);
		printf("\n");
		free(range);
	}
	else
		printf("Memory allocation failed\n");
	return 0;
}
