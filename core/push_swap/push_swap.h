/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:32:50 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:49 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "./libraries/ft_printf/ft_printf.h"

typedef struct s_stack_node
{
	int					data;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

t_stack_node	*stack_store(char **tabs);

// libraries/
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_atoi(const char *str);
int				ft_printf(const char *input, ...);
int				ft_isdigit(unsigned char get_chars);

// src/
void			free_array(char **array);
void			free_stack(t_stack_node *stack);
void			print_stack(t_stack_node *stack);
int				ft_isduplicate(char **argv, int argc);
int				ft_size(char **tabs);
int				invalid_int(char *s);

#endif