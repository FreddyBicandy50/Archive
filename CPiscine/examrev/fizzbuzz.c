#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

void ft_putchar(char digit)
{
    write(1, &digit, 1);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

void fizzbuzz()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ft_putstr("fizzbuzz");
        else if (i % 3 == 0)
            ft_putstr("fizz");
        else if (i % 5 == 0)
            ft_putstr("buzz");
        else
        {
            ft_putnbr(i);
        }
        write(1,"\n",1);
        i++;
    }
}

int main()
{
    fizzbuzz();
    write(1, "\n", 1);
    return (0);
}