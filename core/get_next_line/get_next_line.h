/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:35:10 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/07 12:00:28 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#define MAX_BUFFER 256
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char *ft_strjoin(char *s1, char *s2);
char *ft_bufftrim(char *buffer);
char *ft_get_line(char *buffer);
int is_line(char *str);
int ft_strlen(char *str);

#endif