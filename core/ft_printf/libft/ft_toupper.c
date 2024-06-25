/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:46:17 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/25 12:23:18 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(unsigned char get_chars)
{
	if (get_chars >= 'a' && get_chars <= 'z')
		return (get_chars - 32);
	return (get_chars);
}
