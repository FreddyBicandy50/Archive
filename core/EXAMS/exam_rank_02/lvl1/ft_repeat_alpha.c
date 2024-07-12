/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:11:04 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/11 22:59:06 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void repeat_alpha(char *str)
{
	char c;

	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			c = *str >= 'A' && *str <= 'Z' ? 'A' : 'a';
			while (c <= *str)
			{
				write(1, str, 1);
				c++;
			}
		}
		else
			write(1, str, 1);
		str++;
	}
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 		repeat_alpha(argv[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }