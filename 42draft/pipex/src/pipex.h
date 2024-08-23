/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:35:28 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/23 17:04:28 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
#define PIPEX_H

#include "../get_next_line/get_next_line.h"
#include "../ft_printf/ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
# include <errno.h>
#include <string.h>
#include <stdbool.h>

typedef struct s_data
{
    char    **command;
    int     commands_number;
    char    *command_path;
    int     *pipe;
    int fd_in;
    int fd_out;
    bool stdin;

} t_data;

void ft_error(char *str);
int ft_strcmp(char *s1, char *s2);
char **ft_split(char const *s, char c);
t_data cmdn_init(int argc, char *argv[], char *envp[]);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strlen(const char *str);

#endif