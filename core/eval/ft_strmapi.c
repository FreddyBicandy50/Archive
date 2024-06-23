/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 08:16:28 by anrivera          #+#    #+#             */
/*   Updated: 2024/06/21 11:19:31 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	my_function( unsigned int index, char c)
{
	index = index + 1;
	c = c + 32;
	return (c);
}	*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	p = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(p))
		return (NULL);
	while (i != ft_strlen(s))
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

/* int main (void)
{
	char *string;
	char *new_string;
	
	string = "aaaaaaa";
	new_string = ft_strmapi();
	
	
} 
*/
