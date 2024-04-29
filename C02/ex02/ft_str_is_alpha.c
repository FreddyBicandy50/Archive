/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:25:38 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/21 18:06:54 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' || *str <= 'Z') && (*str >= 'a' || *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}


int main (){
	char *message="124a2";

	if(ft_str_is_alpha(message)){
		printf("no alphabets");
	}else{
		printf("alphabets");
	}
}