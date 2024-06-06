/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:55:14 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/28 17:04:48 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	error_msg(void);

int		ft_atoi(char *str);
int		check_integers(char *str, int *matrix);
int		*get_numbers(char *str, int *matrix);
int		ft_strlen(char *str);

int		to_the_top(int matrix[4][4], int position, int index[16]);
int		to_the_right(int matrix[4][4], int position, int index[16]);
int		to_the_bottom(int matrix[4][4], int position, int index[16]);
int		to_the_left(int matrix[4][4], int position, int index[16]);

int		check_arguments(int argc, char *argv[]);
int		check_repetition(int matrix[4][4], int position, int number);

void	reset(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(matrix[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	check_position(int matrix[4][4], int position, int index[16])
{
	if (to_the_left(matrix, position, index))
		return (1);
	if (to_the_right(matrix, position, index))
		return (1);
	if (to_the_bottom(matrix, position, index))
		return (1);
	if (to_the_top(matrix, position, index))
		return (1);
	return (0);
}

int	solve(int matrix[4][4], int index[16], int position)
{
	int	number;

	if (position == 16)
		return (1);
	number = 1;
	while (number <= 4)
	{
		if (!check_repetition(matrix, position, number))
		{
			matrix[position / 4][position % 4] = number;
			if (!check_position(matrix, position, index))
			{
				if (solve(matrix, index, position + 1))
					return (1);
			}
			else
				matrix[position / 4][position % 4] = 0;
		}
		number++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	matrix[4][4];
	int	*index;

	index = malloc(4 * 16);
	if (check_arguments(argc, argv) && get_numbers(argv[1], index))
	{
		if (solve(matrix, index, 0) == 1)
			print_matrix(matrix);
		else
			error_msg();
	}
	else
	{
		error_msg();
	}
	free(index);
	return (0);
}
