#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int is_dup(char *str, int index)
{
    int i;

    i = index- 1;
    while (i >= 0)
    {
        if (str[index] == str[i])
        {
            return 1;
        }
        i--;
    }

    return 0;
}

void ft_inter(char *s1, char *s2)
{
    int i;
    int k;
    int j;
    char inter[ft_strlen(s1) + 1];
    i = 0;
    k = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                inter[k] = s1[i];
                k++;
                break;
            }
            j++;
        }
        i++;
    }
    inter[k] = '\0';
    i = 0;
    while (inter[i] != '\0')
    {
        if (!is_dup(inter, i))
        {
            write(1,&inter[i],1);
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        ft_inter(argv[1], argv[2]);
    return 0;
}