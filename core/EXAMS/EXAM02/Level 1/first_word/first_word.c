/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:23:21 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/12 15:33:29 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void first_word(char *str)
{
	while ((*str == ' ' || *str == '\t') && *str != '\0')
		str++;
	while ((*str != ' ' && *str != '\t') && *str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	return;
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}