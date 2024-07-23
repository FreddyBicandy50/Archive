#include <stdlib.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		printf("%d\n", res);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int main(void)
{
	char c='0xa';
	reverse_bits(c);
	return (0);
}