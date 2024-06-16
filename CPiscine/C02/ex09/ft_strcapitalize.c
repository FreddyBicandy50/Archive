/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:52:47 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/23 18:53:25 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alph(char C)
{
	if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_numeric(char C)
{
	if (C >= 48 && C <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!(is_alph(str[i])) && !(is_numeric(str[i])))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (is_alph(str[i - 1]) || is_numeric(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "hello, world! 123";
// 	char *result = ft_strcapitalize(str);
// 	write(1, result, sizeof(str));
// 	return 0;
// }
