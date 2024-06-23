/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivera <anrivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:57:08 by anrivera          #+#    #+#             */
/*   Updated: 2024/06/19 15:13:51 by anrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *) big);
	i = 0;
	if (len == -1)
		len = ft_strlen(big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& i + j < len && little [i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *) big);
	while (*big && len--)
	{
		j = 0;
		while (*(big + j) == *(little + j)
			&& *(little + j) && j <= len)
		{
			if (!*(little + j + 1))
				return ((char *)big);
			j++;
		}
		big++;
	}
	return (NULL);
}
