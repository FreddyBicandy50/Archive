/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:06:33 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/29 01:02:24 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// int	main(int argc, char **argv)
// {
// 	int i = 0;

// 	if (argc > 1)
// 	{
// 		while(argv[1][i])
// 		{
// 			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
// 				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
// 			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
// 				argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
// 			write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>
void rot_13(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = (*str - 'A' + 13) % 26 + 'A';
		else if (*str >= 'a' && *str <= 'z')
			*str = (*str - 'a' + 13) % 26 + 'a';
		write(1,str,1);
		str++;
	}
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 		rot_13(argv[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }