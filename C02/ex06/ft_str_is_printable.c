/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:49:22 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/21 18:59:17 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 || *str <= 126)
		{
			str++;
			continue;
		}else{
			return 0;
		}
	}
	return (1);
}

int main(){
	char *message="hello world";
	if(ft_str_is_printable(message)){
		printf("printable chars");
	}else{
		printf("unprintable chars");
	}
}