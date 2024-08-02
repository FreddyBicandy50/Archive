// #include <unistd.h>

// void write_word(char *start, char *end)
// {
//     while (start < end)
//     {
//         write(1, start, 1);
//         start++;
//     }
// }

// int main(int argc, char **argv)
// {
//     char *str;
//     char *first_word_start;
//     char *first_word_end;

//     if (argc > 1)
//     {
//         str = argv[1];
//         // skip leading spaces and tabs
//         while (*str == ' ' || *str == '\t')
//             str++;

//         // we found the first letter of a word;
//         first_word_start = str;
//         while (*str && *str != ' ' && *str != '\t')
//             str++;
//         first_word_end = str;
//         // this is the end of it;

//         // skip the spaces to see if we have another word;
//         while (*str == ' ' || *str == '\t')
//             str++;
//         // if yeah
//         if (*str)
//         {
//             // walk threw
//             while (*str)
//             {
//                 // if i am on a space or tab
//                 if (*str == ' ' || *str == '\t')
//                 {
//                     // skip them
//                     while (*str == ' ' || *str == '\t')
//                         str++;
//                     if (*str)
//                         write(1, " ", 1);
//                 }
//                 else
//                 {
//                     // else just write them
//                     write(1, str, 1);
//                     str++;
//                 }
//             }
//             write(1, " ", 1);
//         }
//         write_word(first_word_start, first_word_end);
//     }
//     write(1, "\n", 1);
//     return 0;
// }

#include <unistd.h>

void rostring(char *str)
{
    int i, start, end;

    while (*str == ' ' && *str == '\t')
        str++;
    if (*str == NULL || *str == '\0')
        return;
    i = 0;
    while (str[i] != '\0')
    {
        
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc > 1)
        rostring(argv[1]);
    write(1, "\n", 1);
    return (0);
}