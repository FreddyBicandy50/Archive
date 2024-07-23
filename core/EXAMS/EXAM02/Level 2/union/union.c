#include <unistd.h>

// int has_char(char *str, char c)
// {
//     while (*str)
//     {
//         if (*str == c)
//             return 1;
//         str++;
//     }
//     return 0;
// }

// void union_str(char *str1, char *str2)
// {
//     char seen[256] = {0};
//     int i = 0;

//     while (*str1)
//     {
//         if (!has_char(seen, *str1))
//         {
//             seen[i] = *str1;
//             write(1, str1, 1);
//             i++;
//         }
//         str1++;
//     }
//     while (*str2)
//     {
//         if (!has_char(seen, *str2))
//         {
//             seen[i] = *str2;
//             write(1, str2, 1);
//             i++;
//         }
//         str2++;
//     }
// }

int found(char *str, char c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return 1;
        str++;
    }
    return 0;
}

void union_str(char *str1, char *str2)
{
    int i;
    char printed[128] = {0};

    if (!str1 || !str2)
        return;
    i = 0;
    while (*str1 != '\0')
    {
        if (!found(printed,*str1))
        {
            write(1,str1,1);
            printed[i]=*str1;
            i++;
        }
        str1++;
    }   
     while (*str2 != '\0')
    {
        if (!found(printed,*str2))
        {
            write(1,str2,1);
            printed[i]=*str2;
            i++;
        }
        str2++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        union_str(argv[1], argv[2]);
    write(1, "\n", 1);
}