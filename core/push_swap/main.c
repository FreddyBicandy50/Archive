/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:46:45 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/05 15:07:52 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack_node *sa;
	// t_stack_node *sb;

	sa = NULL;
	// sb = NULL;
	if (argc < 2)
	{
		printf("ERROR\n");
		exit(-1);
	}
	else if (argc == 2)
	{
		//handle duplicates
		argv = ft_split(argv[1], ' ');
		if (!argv)
		{
			ft_printf("ERROR\n"); // TODO fix ft_printf
			exit(-1);
		}
	}
	//TODO::Handle argc > 2 
		//TODO: handle non digits
		//TODO: handle duplicates
	else
	{
		printf("ERROR\n"); // TODO fix ft_printf
		exit(-1);
		// 	int i;

		// 	i = 1;
		// 	while (argv[i])
		// 	{
		// 		printf("->%s\n",argv[i]);
		// 		i++;
		// 	}
		// 	printf("%d\n",i);
		// 	printf("->gone");
		// 	return (1);
	}
	sa = stack_store(argv);
	if (sa == NULL)
	{
		printf("error");
		exit(-1);
	}
	free_stack(sa);
	free_array(argv);
	return (0);
}
