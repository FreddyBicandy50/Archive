#include <unistd.h>
#include <stdio.h>

void write_word(char *start, char *end)
{
    while (start < end)
    {
        write(1, start, 1);
        start++;
    }
}

void ft_rostring(char *str)
{
    char *first_word_start;
    char *first_word_end;

    while (*str == ' ' || *str == '\t')
        str++;
    first_word_start = str;
    while (*str && *str != ' ' && *str != '\t')
        str++;
    first_word_end = str;
    while (*str == ' ' || *str == '\t')
        str++;
    if (*str)
    {
        while (*str)
        {
            if (*str == ' ' || *str == '\t')
            {
                while (*str == ' ' || *str == '\t')
                    str++;
                if (*str)
                    write(1, " ", 1);
            }
            else
            {
                write(1, str, 1);
                str++;
            }
        }
        write(1, " ", 1);
    }
    write_word(first_word_start, first_word_end);
    write(1, "\n", 1);
}

char *skip(char *str)
{
    while (*str && (*str == ' ' || *str == '\t'))
        str++;
    return (str);
}

void rostring(char *str)
{
    char *start, *end;

    str = skip(str);
    start = str;
    while (*str && (*str != ' ' && *str != '\t'))
        str++;
    end = str;
    str = skip(str);

    while (*str)
    {
        if (*str == ' ' || *str == '\t')
        {
            while (*str == ' ' || *str == '\t')
                str++;
            if (*str)
                write(1, " ", 1);
        }
        else
        {
            write(1, str, 1);
            str++;
        }
    }
    write(1, " ", 1);
    while (start <= end)
    {
        write(1, start, 1);
        start++;
    }
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        write(1, "\tMine\n", 7);
        rostring(argv[1]);
        write(1, "\n\tOriginal\n", 11);
        ft_rostring(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}