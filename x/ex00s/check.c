/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:14 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/27 19:46:00 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	ft_strlen(char *str);

int	check_integers(char *str, int *matrix)
{
	while (*str != '\0')
	{
		if ((*str >= '1' && *str <= '4') || *str == ' ')
		{
			if (*str != ' ')
			{
				*matrix = ft_atoi(str);
				matrix++;
			}
		}
		else
			return (0);
		str++;
	}
	return (1);
}

int	check_arguments(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 31)
		return (0);
	return (1);
}

int	check_repetition(int matrix[4][4], int position, int number)
{
	int	i;

	i = 0;
	while (i < position / 4)
	{
		if (matrix[i][position % 4] == number)
			return (1);
		i++;
	}
	i = 0;
	while (i < position % 4)
	{
		if (matrix[position / 4][i] == number)
			return (1);
		i++;
	}
	return (0);
}
