/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:11:04 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/11 22:41:45 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {

// 	int a = 5;
// 	int b = 1;

// 	printf("\na=%d | b=%d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("\na=%d | b=%d\n", a, b);
// 	return (0);
// }