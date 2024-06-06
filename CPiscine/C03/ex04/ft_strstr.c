/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:21:18 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/24 19:02:15 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*position;

	position = str;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "hello alimy ntestame is fredy !";
// 	char to_find[] = "test";

// 	// Call ft_strstr function
// 	char *result = ft_strstr(str, to_find);

// 	// Check if result is NULL or not
// 	if (result != NULL)
// 	{
// 		printf("'%s' found at position: %ld\n", to_find, result - str);
// 	}
// 	else
// 	{
// 		printf("'%s' not found in '%s'\n", to_find, str);
// 	}

// 	return 0;
// }
