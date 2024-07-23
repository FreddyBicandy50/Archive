#include <unistd.h>

void epur_str(char *str)
{
    int flag;
    while (*str == ' ' && *str == '\t')
        str++;
    flag = 0;
    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t')
            flag = 1;
        else
        {
            if (flag)
                write(1, "   ", 3);
            write(1, str, 1);
            flag = 0;
        }
        str++;
    }
}

int main(void)
{
    epur_str(" this        time it      will     be    more complex  .           ");
    return (0);
}