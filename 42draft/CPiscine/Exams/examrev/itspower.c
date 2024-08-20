#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"


int is_power_of_2(unsigned int n) {
    // A power of 2 has only one bit set
    // So, if n & (n - 1) is 0, then it is a power of 2
    return (n && !(n & (n - 1)));
}


int main(int argc, char *argv[])
{
    if (argc == 3)
        if(is_power_of_2(argv[1]))
            printf("its power of 2");
    return 0;
}