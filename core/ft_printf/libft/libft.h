/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:37:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/26 17:17:10 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_strlen(const char *str);

void	ft_putnbr_hex(unsigned int num, int isupper);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_putstr_fd(char *s, int fd);

char	ft_toupper(unsigned char get_chars);
char	*ft_itoa(int n);
char	*ft_utoa(int n);

#endif
