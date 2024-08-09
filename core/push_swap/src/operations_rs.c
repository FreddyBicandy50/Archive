/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:20:31 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/09 15:20:52 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node	*rs(t_stack_node *stack)
{
	t_stack_node	*last;
	t_stack_node	*new_head;

	if (!stack || !stack->next)
		return (stack);
	last = stack;
	while (last->next)
		last = last->next;
	new_head = stack->next;
	stack->next = NULL;
	stack->prev = last;
	last->next = stack;
	return (new_head);
}

void	rr(t_stack_node **sa, t_stack_node **sb)
{
	if (sa && *sa && (*sa)->next)
		*sa = rs(*sa);
	if (sb && *sb && (*sb)->next)
		*sb = rs(*sb);
}
