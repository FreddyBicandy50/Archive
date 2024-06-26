/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:01:56 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/26 17:16:05 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft/libft.h"

int nbr_format(va_list args, const char format)
{
	int count;
	int num;
	char *str;

	if (format == 'd' || format == 'i')
	{
		num = va_arg(args, int);
		str = ft_itoa(num);
		ft_putstr_fd(str, 1);
		count = ft_strlen(str);
		free(str);
	}
	else if (format == 'u')
	{
		num = va_arg(args, unsigned int);
		str = ft_utoa(num);
		ft_putstr_fd(str, 1);
		count = ft_strlen(str);
		free(str);
	}
	return (count);
}

int ft_printf(const char *PARAM, ...)
{
	size_t count;
	va_list args;
	size_t i;

	i = 0;
	count = 0;
	va_start(args, PARAM);
	while (PARAM[i] != '\0')
	{
		if (PARAM[i] == '%')
		{
			i++;
			if (PARAM[i] == 'd' || PARAM[i] == 'i' || PARAM[i] == 'u')
				count += nbr_format(args, PARAM[i]);
		}
		else
		{
			ft_putchar_fd(PARAM[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	int count;

// 	printf("------------------------FT-----------------------------\n");
// 	count = ft_printf("printf:test %d\n");
// 	printf("~%d\n", count);
// 	printf("------------------------Original-----------------------------\n");
// 	printf("~%d\n", printf("PRINTF:test %d%d\n", 123, __INT_MAX__ * -1 - 1));
// 	return (0);
// }
