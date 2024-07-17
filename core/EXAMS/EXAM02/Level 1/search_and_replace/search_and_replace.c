#include <unistd.h>

void srr(char *str, char c, char z)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            str[i] = z;
        write(1,&str[i],1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        char c = argv[2][0];
        char z = argv[3][0];
        srr(argv[1], c, z);
    }
    write(1, "\n", 1);
    return 0;
}
