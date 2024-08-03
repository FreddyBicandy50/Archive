/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:46:45 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/03 18:11:44 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node *stack_store(char **tabs)
{
    t_stack_node *new_node = NULL, *stack = NULL, *head = NULL;
    int i;

    i = 0;
    // walk threw the tab
    while (*tabs[i] != '\0')
    {
        // allocate a new block of node
        new_node = (t_stack_node *)malloc(sizeof(t_stack_node) * 1); // TODO use libft new node
        if (!new_node)
            return (NULL);

        new_node->data = atoi(tabs[i]); // TODO import ft_atoi
        new_node->next = NULL;
        new_node->prev = NULL;

        if (stack == NULL)
            stack = new_node;
        else
        {
            head->next = new_node;
            new_node->prev = head;
        }

        head = new_node;
        i++;
    }
    return (stack);
}

int main(void)
{
    char *tabs[] = {"42", "8", "1", "5", "18", "6", "\0"};
    t_stack_node *sa;

    sa = NULL;
    sa = stack_store(tabs);

    // Print the stack
    t_stack_node *current = sa;
    while (current != NULL)
    {
        printf("%p | %d\n", (void *)current, current->data);
        current = current->next;
    }

    return (0);
}
