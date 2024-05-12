#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char str)
{
    write(1, &str, 1);
}

void first_word(char *str,int word_index)
{
    int i;
    int word_count;

    i = word_index;
    while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
        i++;
    word_index = i;
    word_count = 0;
    while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
    {
        word_count++;
        i++;
    }
    if (word_count >= 2)
    {
        i = word_index;
        while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
        {
            ft_putchar(str[i]);
            i++;
        }
    }else{
        if(str[i] != '\0')
            i++;
        first_word(str,i);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        first_word(argv[1],0);
    }
    write(1, "\n", 1);
    return (0);
}