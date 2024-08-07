/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:46:45 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/07 23:06:38 by fbicandy         ###   ########.fr       */
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
		ft_printf("ERROR\n");
		exit(-1);
	}
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
		{
			ft_printf("ERROR\n");
			exit(-1);
		}
	}
	// TODO::Handle argc > 2
	// TODO: handle non digits
	// TODO: handle duplicates
	else
	{
		int i;
		char *temp;
		//TODO
			//handle memorie leaks
			//and the rest
		temp = "";
		i = 1;
		while (argv[i])
		{
			temp = ft_strjoin(temp, argv[i]);
			i++;
		}
		i = 0;
		while (temp[i])
		{
			ft_printf("%c", temp[i]);
			i++;
		}
	}
	sa = stack_store(argv);
	if (sa == NULL)
	{
		ft_printf("ERROR");
		exit(-1);
	}
	free_stack(sa);
	free_array(argv);
	return (0);
}
