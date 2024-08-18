/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:06:46 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/09 20:44:22 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int stack_size(t_stack_node *sa)
{
    t_stack_node *temp;
    int size = 0;
    temp = sa;
    while (sa != NULL)
    {
        sa = sa->next;
        size++;
    }
    sa = temp;
    return (size);
}

t_stack_node *push_swap(t_stack_node *sa, t_stack_node *sb)
{
    (void)*sa;
    (void)*sb;
    return (sa);
}

int find_biggest(t_stack_node *stack)
{
    int max;
    t_stack_node *temp;

    max = stack->data;
    temp = stack;
    while (stack != NULL)
    {
        if (max < stack->data)
            max = stack->data;
        stack = stack->next;
    }
    stack = temp;
    return (max);
}



t_stack_node *sort(t_stack_node *sa, t_stack_node *sb)
{
    int size = stack_size(sa);
    int biggest = find_biggest(sa);
    (void)*sb;

    if(size<=1)
        return (sa);
    if (size <= 2)
    {
        if (sa->data == biggest)
            sa = rs(sa);
        else if (sa->next->data == biggest)
            sa = rrs(sa);
        if (sa->data > sa->next->data)
            sa = sw(sa);
    }
    // else
    //     push_swap(sa, sb);
    ft_printf("Stack_size =%d\n", size);
    return (sa);
}