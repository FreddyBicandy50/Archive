/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:42:36 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/11 21:15:35 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char *str)
{
	if (!str)
		return;
	while ((*str == ' ' || *str == '\t') && *str!='\0')
		str++;
	while (*str != ' ' && *str != '\t' && *str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	return ;
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 		first_word(argv[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }
