/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:42:03 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/07 22:26:16 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void free_array(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void free_stack(t_stack_node *stack)
{
	t_stack_node *temp;

	while (stack != NULL)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

void print_stack(t_stack_node *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->data); // TODO import ft_printf
		stack = stack->next;
	}
}

t_stack_node *stack_store(char **tabs)
{
	t_stack_node *new_node = NULL, *stack = NULL, *head = NULL;
	int i;

	if (ft_isduplicate(tabs, ft_size(tabs)))
		return (NULL);
	i = 0;
	while (tabs[i])
	{
		new_node = (t_stack_node *)malloc(sizeof(t_stack_node) * 1); // TODO use libft new node
		if (!new_node)
			return (NULL);
		new_node->data = ft_atoi(tabs[i]);
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
