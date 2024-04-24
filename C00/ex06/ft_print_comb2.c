/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:46:49 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/20 11:47:58 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2()
{
	char	d1 = '0';
	char	d2 = '0';
	char	d3 = '0';
	char	d4 = '1';

	while (d1 <= '9')
	{
		while (d2 <= '9')
		{
			while (d3 <= '9')
			{
				while (d4 <= '9')
				{
					write(1, &d1, 1);
					write(1, &d2, 1);
					write(1, " ", 1);
					write(1, &d3, 1);
					write(1, &d4, 1);
					write(1, ", ", 2);
					d4++;
				}
				d4 = '0'; // Reset d4 for next iteration
				d3++;
			}
			d3 = '0'; // Reset d3 for next iteration
			d2++;
		}
		d2 = '0'; 
		d1++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
