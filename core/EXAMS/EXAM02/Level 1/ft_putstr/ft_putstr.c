/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:54:48 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/12 16:52:43 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_putstr(char *str)
{
	while (str && *str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main(void)
{
	char *message="Hello World";

	ft_putstr(message);
	write(1,"\n",1);
	return (0);
}