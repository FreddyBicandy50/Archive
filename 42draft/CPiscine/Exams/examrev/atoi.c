#include <unistd.h>
#include <stdio.h>

int isvalid(char str,int n)
{
    char base[16] = "0123456789abcdef";
    char base2[16] = "0123456789ABCDEF";
    int i;

    i = n-1;
    while (i >= 0)
    {
        if (str == base[i] || str == base2[i])
            return i;
        i--;
    }
    return -1;
}

int atio_base(char *str, int n)
{

    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    result = 0;

    while (isvalid(str[i],n) != -1)
    {
         result = result * n + isvalid(str[i],n);
        i++;
    }
    return result * sign;
}

void main()
{
    char *num = "011";
    int n = 2;
    printf("%d",atio_base(num, n));
}