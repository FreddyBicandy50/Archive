#include <stdlib.h>
#include "sort_list.list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *restart;

    restart = lst;

    while (lst != NULL && lst->next != NULL)
    {

        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst = restart;
        }
        else
            lst = lst->next;
    }
    return(restart);
}