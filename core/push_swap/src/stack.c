/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:42:03 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/08 17:27:48 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_stack(t_stack_node *stack)
{
	t_stack_node	*temp;

	while (stack != NULL)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

void	print_stack(t_stack_node *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}

t_stack_node	*node_add(t_stack_node *new_node,
					char *tabs, t_stack_node *head)
{
	new_node->data = ft_atoi(tabs);
	new_node->next = NULL;
	new_node->prev = head;
	return (new_node);
}

t_stack_node	*stack_store(char **tabs)
{
	t_stack_node	*new_node;
	t_stack_node	*stack;
	t_stack_node	*head;
	int				i;

	i = 0;
	new_node = NULL;
	stack = NULL;
	head = NULL;
	while (tabs[i])
	{
		if (ft_isduplicate(tabs, ft_size(tabs)) || invalid_int(tabs[i]))
			return (NULL);
		new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
		if (!new_node)
			return (NULL);
		new_node = node_add(new_node, tabs[i], head);
		if (head)
			head->next = new_node;
		else
			stack = new_node;
		head = new_node;
		i++;
	}
	return (stack);
}
