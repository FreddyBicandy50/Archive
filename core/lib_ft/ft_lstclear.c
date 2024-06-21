/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:24:47 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/21 11:53:07 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;

	temp = *lst;
	while (temp != NULL)
	{
		next_node = temp->next;
		del(temp->content);
		free(temp);
		temp = next_node;
	}
	*lst = NULL;
}

// void	free_content(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *head;
// 	t_list *node;
// 	int *content;

// 	head = NULL;
// 	content = malloc(3 * sizeof(int));
// 	if (content == NULL)
// 		return (1);
// 	content[0] = 40;
// 	content[1] = 50;
// 	content[2] = 10;
// 	node = ft_lstnew(&content[0]);
// 	ft_lstadd_back(&head, node);
// 	node = ft_lstnew(&content[1]);
// 	ft_lstadd_back(&head, node);
// 	node = ft_lstnew(&content[2]);
// 	ft_lstadd_back(&head, node);
// 	ft_lstclear(&head, free_content);
// 	while (head != NULL)
// 	{
// 		printf("%d\n", *(int *)head->content);
// 		head = head->next;
// 	}
// 	return (0);
// }
