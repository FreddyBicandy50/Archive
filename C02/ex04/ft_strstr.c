#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    char *position = NULL;

    while (str[i] != '\0' && to_find[j] != '\0')
    {
        if (str[i] == to_find[j])
        {
            if (j == 0)
                position = &str[i];
            j++;
        }
        else
        {
            position = NULL;
            j = 0;
        }
        i++;
    }
    return position;
}

void main(void)
{
    char str[] = "FreddyHello World";
    char *find = "fddy";
    char *res = ft_strstr(str, find);
    if (res == NULL)
        printf("\nsubstring not found\n");
    else
        printf("\nsubstring found\n");
}