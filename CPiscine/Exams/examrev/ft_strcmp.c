#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ft_strcmp(argv[1], argv[2]);
    write(1, "\n", 1);
    return 0;
}