/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:22:16 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/20 09:36:17 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *head;
// 	t_list *new;
// 	t_list *current;
// 	int *content;

// 	head = NULL;
// 	content = (int *)malloc(1 * sizeof(int));
// 	if (!content)
// 		return (1);
// 	*content = 42;
// 	current = head;
// 	new = ft_lstnew(content);
// 	ft_lstadd_front(&head, new);
// 	printf("%d\n", *(int *)current->content);
// 	return (0);
// }
