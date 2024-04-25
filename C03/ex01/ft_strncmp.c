/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:10:23 by fbicandy          #+#    #+#             */
/*   Updated: 2024/04/23 22:36:34 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;

	if (s1[i] == s2[i])
		return (0);

	else
		return (s1[i] - s2[i]);
}

int main(void)
{
	char str1[20] = "Hello World";
	char *str2 = "Helxo";

	printf("%d", ft_strncmp(str2, str1, 3));
}
