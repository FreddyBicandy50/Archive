#include <unistd.h>

void epur_str(char *str)
{
    int flag;

    while (*str == ' ' || *str == '\t')
        str++;
    flag = 0;
    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t')
            flag = 1;
        else
        {
            if (flag)
                write(1, "-", 1);
            write(1, str, 1);
            flag = 0;
        }
        str++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        epur_str(argv[1]);
    write(1, "\n", 1);
    return (0);
}