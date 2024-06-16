#include <unistd.h>
#include <stdlib.h>

void search_replace(char *str, char *find, char *replace)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == *find)
            str[i]=*replace;
        write(1,&str[i],1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        search_replace(argv[1], argv[2], argv[3]);
    }
    write(1, "\n", 1);
    return (0);
}