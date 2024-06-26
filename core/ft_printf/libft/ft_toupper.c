/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:43:19 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/25 21:51:56 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_toupper(unsigned char get_chars)
{
	if (get_chars >= 'a' && get_chars <= 'z')
		return (get_chars - 32);
	return (get_chars);
}
