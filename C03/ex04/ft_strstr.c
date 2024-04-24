/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:21:18 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/23 23:03:43 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char *ft_strstr(char *str, char *to_find)
{
	int i 
	= 0;
	int j = 0;
	char *position = NULL; // Use NULL for null pointer

	while (to_find[j] != '\0')
	{
		if (str[i] == '\0')
			return NULL;
		

		if (str[i] == to_find[j])
		{
			if (j == 0)
			{
				position = &str[i];
			}
			j++;
		}
		else
		{
			// Reset position and j if characters don't match
			position = NULL;
			j = 0;
		}
		i++;
	}

	return position;
}

// void main(void)
// {
// 	char *str1 = "test";
// 	char *str2 = "Hello Wolrd i am fredy";

// 	char *res = ft_strstr(str2, str1);
// 	while (*res != '\0')
// 	{
// 		printf("%c", *res);
// 		res++;
// 	}
// }
