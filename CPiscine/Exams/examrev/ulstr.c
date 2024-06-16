#include <unistd.h>
#include <stdio.h>

void rot_13(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        rot_13(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}