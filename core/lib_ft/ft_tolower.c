/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:46:17 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/21 12:49:05 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(unsigned char get_chars)
{
	if (get_chars >= 'A' && get_chars <= 'Z')
		return (get_chars + 32);
	return (get_chars);
}
