/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:57:10 by anrivera          #+#    #+#             */
/*   Updated: 2024/06/19 17:46:46 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_spaces(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		integer;

	i = 0;
	sign = 1;
	integer = 0;
	while (ft_check_spaces(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sign = sign * -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' )
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			integer = integer * 10 ;
			integer = integer + (nptr[i++] - '0');
		}
		else
			return (integer * sign);
	}
	return (integer * sign);
}
