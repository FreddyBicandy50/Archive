/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:46:45 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/04 23:30:15 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack_node *sa;

	sa = NULL;
	if (argc < 2)
	{
		printf("to few arguments\n");
		return (1);
	}
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
		{
			//TODO fix ft_printf
			printf("error");
			return (1);
		}
	}
	sa = stack_store(argv);
	if (sa == NULL)
	{
		printf("error");
		return (1);
	}
	else
		print_stack(sa);
	free_stack(sa);
	return (0);
}
