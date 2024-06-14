/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:37:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/15 00:12:55 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

int		ft_isalnum(int c);
char	*ft_strchr(char *str, int c);
int		ft_isalpha(char get_chars);
int		ft_isdigit(unsigned char get_chars);
int		ft_strlen(const char *str);
char	ft_tolower(unsigned char get_chars);
char	ft_toupper(unsigned char get_chars);
int		ft_isascii(int c);
int		ft_isprint(char c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif