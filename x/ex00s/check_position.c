/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:08:05 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/28 16:07:05 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	to_the_top(int matrix[4][4], int position, int index[16])
{
	int	i;
	int	highnb;
	int	seen;

	i = 0;
	highnb = 0;
	seen = 0;
	if (position / 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[i][position % 4] > highnb)
			{
				highnb = matrix[i][position % 4];
				seen++;
			}
			i++;
		}
		if (index[position % 4] != seen)
			return (1);
	}
	return (0);
}

int	to_the_right(int matrix[4][4], int position, int index[16])
{
	int	i;
	int	highnb;
	int	seen;

	i = 3;
	highnb = 0;
	seen = 0;
	if (position % 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[position / 4][i] > highnb)
			{
				highnb = matrix[position / 4][i];
				seen++;
			}
			i--;
		}
		if (index[12 + position / 4] != seen)
			return (1);
	}
	return (0);
}

int	to_the_bottom(int matrix[4][4], int position, int index[16])
{
	int	i;
	int	highnb;
	int	seen;

	i = 3;
	highnb = 0;
	seen = 0;
	if (position / 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[i][position % 4] > highnb)
			{
				highnb = matrix[i][position % 4];
				seen++;
			}
			i--;
		}
		if (index[4 + position % 4] != seen)
			return (1);
	}
	return (0);
}

int	to_the_left(int matrix[4][4], int position, int index[16])
{
	int	i;
	int	highnb;
	int	seen;

	i = 0;
	highnb = 0;
	seen = 0;
	if (position % 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[position / 4][i] > highnb)
			{
				highnb = matrix[position / 4][i];
				seen++;
			}
			i++;
		}
		if (index[8 + position / 4] != seen)
			return (1);
	}
	return (0);
}
