/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:32:50 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/06 22:52:20 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./libraries/ft_printf/ft_printf.h"

typedef struct s_stack_node
{
    int data;
    struct s_stack_node *next;
    struct s_stack_node *prev;
} t_stack_node;

// libraries/
int ft_atoi(const char *str);
char **ft_split(char const *s, char c);
int ft_printf(const char *input, ...);

// src/
void free_array(char **array);
void free_stack(t_stack_node *stack);
void print_stack(t_stack_node *stack);
t_stack_node *stack_store(char **tabs);

#endif