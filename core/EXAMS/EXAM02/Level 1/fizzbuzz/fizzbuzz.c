/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:41:17 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/12 15:52:51 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void write_number(int nbr)
{

	char res;
	if (nbr > 9)
		write_number(nbr / 10);
	res = nbr % 10 + '0';
	write(1, &res, 1);
}

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if(i%3==0 && i%5==0)
			write(1,"fizzbuzz",8);
		else if(i%3==0)
			write(1,"fizz",4);
		else if(i%5==0)
			write(1,"buzz",4);
		else
			write_number(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
};