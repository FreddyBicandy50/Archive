/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:28:46 by mhabbal           #+#    #+#             */
/*   Updated: 2024/04/21 16:18:58 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str);

void	check_position(int rows, int cols, int max_rows, int max_cols)
{
	if (max_rows - rows == max_rows)
	{
		if (max_cols - cols == max_cols || max_cols - cols == 1)
			ft_putchar("A");
		else
			ft_putchar("B");
	}
	else if (max_rows - rows == 1)
	{
		if (max_cols - cols == max_cols || max_cols - cols == 1)
			ft_putchar("C");
		else
			ft_putchar("B");
	}
	else
	{
		if (max_cols - cols == max_cols || max_cols - cols == 1)
			ft_putchar("B");
		else
			ft_putchar(" ");
	}
}

void	rush(int x, int y)
{
	int	rows;
	int	cols;
	int	n;

	n = 10;
	if (y <= 0 || x <= 0)
	{
		ft_putchar("invalid\nrows and cols must at least 1");
		return ;
	}
	rows = 0;
	cols = 0;
	while (rows < y)
	{
		while (cols < x)
		{
			check_position(rows, cols, y, x);
			cols++;
		}
		ft_putchar("\n");
		cols = 0;
		rows++;
	}
}
