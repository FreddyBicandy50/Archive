/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakhoury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:41:01 by gakhoury          #+#    #+#             */
/*   Updated: 2024/06/17 14:12:32 by gakhoury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numsize(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*result;
	long	num;

	num = n;
	size = ft_numsize(n);
	result = (char *)malloc(size + 1);
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[--size] = '0';
	while (num != 0)
	{
		result[--size] = '0' + (num % 10);
		num /= 10;
	}
	return (result);
}
