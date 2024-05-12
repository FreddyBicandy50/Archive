#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int calc(char *num)

{
    int result;
    int sign;

    result = 0;
    sign = 1;
    if (num[0] == '-')
        sign *= -1;

    while (*num != '\0')
    {
        if (*num >= '0' && *num <= '9')
            result = result * 10 + *num - '0';
    }
    return (result * sign);
}
int ft_calc(int num1, char op, int num2)
{
    if(op == '*')
        return num1 * num2;
    if(op == '+')
        return num1 + num2;
    if(op == '-')
        return num1 - num2;
    if(op == '/')
        return num1 / num2;
    return (0);
}

int main(int argc, char *argv[])
{
    int num1;
    int num2;
    if (argc == 4)
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        printf("%d\n", ft_calc(num1, argv[2][0], num2));
    }
    return 0;
}