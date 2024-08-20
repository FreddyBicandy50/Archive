#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *src)
{
    int len;
    len = 0;
    while (src[len] != '\0')
        len++;
    return len;
}

char *ft_strrev(char *str)
{
    char *dest;
    int len = ft_strlen(str);
    int i;
    int j;

    dest = malloc(sizeof(char *) * (len + 1));
    i= 0;
    while (str[i] != '\0')
        i++;
    
    i--;
    j = 0;
    while (i >= 0)
    {
        dest[j]=str[i];
        i--;
        j++;
    }
    return  dest;
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        printf("%s\n", ft_strrev(argv[1]));
    return 0;
}