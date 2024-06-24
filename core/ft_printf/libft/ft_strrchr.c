/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 23:26:02 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/14 23:46:06 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*last_occurrence;
	char	*s;

	last_occurrence = NULL;
	s = (char *)str;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if ((char)c == '\0')
		return (s);
	return (last_occurrence);
}
