#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i;
	unsigned char bits;

	i = 8;
	while (--i)
	{
		bits = (octet >> i & 1) + '0';
		write(1, &bits, 1);
	}
}

int main(void)
{
	unsigned char octet;

	octet = 4;
	print_bits(octet);
	write(1, "\n", 1);
	return (0);
}