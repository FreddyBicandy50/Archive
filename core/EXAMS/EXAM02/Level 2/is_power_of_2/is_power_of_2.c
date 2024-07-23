#include <stdio.h>

int is_power_of_two(unsigned int n)
{
    if (n == 0)
        return 0;
    while (n % 2 == 0)
        n /= 2;
    return n == 1;
}

int main()
{
    unsigned int number = 1;

    if (is_power_of_two(number))
        printf("%u is a power of 2\n", number);
    else
        printf("%u is not a power of 2\n", number);
}