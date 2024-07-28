#include <unistd.h>

// int main(int ac, char **av)
// {
//     if (ac == 3)
//     {
//         int seen[256] = {0};
//         int i = 0;
//         int j = 0;

//         while (av[1][i])
//         {
//             if (!seen[av[1][i]])
//             {
//                 write(1, &av[1][i], 1);
//                 seen[av[1][i]] = 1;
//             }
//             i++;
//         }
//         while (av[2][j])
//         {
//             if (!seen[av[2][j]])
//             {
//                 write(1, &av[2][j], 1);
//                 seen[av[2][j]] = 1;
//             }
//             j++;
//         }
//     }
//     write(1, "\n", 1);
//     return 0;
// }

int haschar(char *printed, char c)
{
    int i;

    i = 0;
    while (printed[i])
    {
        if (printed[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void uni(char *s1, char *s2)
{
    char printed[255] = {0};
    int i;

    i = 0;
    while (*s1 != '\0')
    {
        if (!haschar(printed, *s1))
        {
            write(1, s1, 1);
            printed[i] = *s1;
            i++;
        }
        s1++;
    }
    while (*s2 != '\0')
    {
        if (!haschar(printed, *s2))
        {
            write(1, s2, 1);
            printed[i] = *s2;
            i++;
        }
        s2++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        uni(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}