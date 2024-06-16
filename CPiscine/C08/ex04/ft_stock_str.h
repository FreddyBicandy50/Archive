/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:31:37 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/04 22:31:03 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_H
#define FT_STOCK_H
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

#endif