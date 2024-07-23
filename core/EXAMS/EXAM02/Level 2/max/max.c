#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int i;
	int temp;

	if (len == 0)
		return (0);
	i = 0;
	temp = 0;
	while (i < len)
	{
		if (tab[i] > temp)
			temp = tab[i];
		i++;
	}
	return (temp);
}

int main(void)
{
	int tab[] = {1, 100, 3, 4, 5};
	int len = 5;
	int max_value = max(tab, len);

	printf("The maximum value is: %d\n", max_value);
	return 0;
}
