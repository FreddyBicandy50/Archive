/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:27:58 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/01 19:51:26 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_strlen(char *src)
{
	int	lenght;

	lenght = 0;
	while (*src != '\0')
	{
		lenght++;
		src++;
	}
	return (lenght);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	char	*temp;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	temp = dup;
	while (*src != '\0')
	{
		*dup = *src;
		dup++;
		src++;
	}
	dup++;
	return (temp);
}

// int main(void)
// {
// 	char *message;

// 	message = "message";
// 	char *res = ft_strdup(message);
// 	while (*res != '\0')
// 	{
// 		printf("%c", *res);
// 		res++;
// 	}
// 	return (0);
// }
