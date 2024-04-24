

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
    int i;

    i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

// void main (void){
//     char *str="h@ello my name is freddy";
//     printf("%d",ft_strlen(str));
// }