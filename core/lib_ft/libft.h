/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:37:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/13 21:55:58 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(char get_chars);
int		ft_isdigit(unsigned char get_chars);
char	*ft_strchr(char *str, int c);
int		ft_strlen(const char *str);
char	ft_tolower(unsigned char get_chars);
char	ft_toupper(unsigned char get_chars);
char	ft_toupper(unsigned char get_chars);
int		ft_isascii(int c);
int		ft_isprint(char c);

#endif