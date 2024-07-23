#include <stdio.h>

// size_t ft_strcspn(const char *s, const char *reject)
// {
//     int i = 0;
//     int j = 0;

//     while (s[i] != '\0')
//     {
//         j = 0;
//         while (reject[j] != '\0')
//         {
//             if (s[i] == reject[j])
//                 return (i);
//             j++;
//         }
//         i++;
//     }
//     return (i);
// }

size_t ft_strcspn(const char *s, const char *reject)
{
    int len;
    int j;

    len = 0;
    j = 0;
    while (s[len] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[len] == reject[j])
                return (len);
            j++;
        }
        len++;
    }
    return (len);
}

int main(void)
{
    printf("%ld", ft_strcspn("abce", "e"));
    return (0);
}