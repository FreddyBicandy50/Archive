/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:20:40 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/23 18:29:33 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_error(char *str)
{
    ft_printf("%s", str);

    exit(-1);
}
t_data init_data(t_data data)
{
    data.command = NULL;
    data.commands_number = -1;
    data.command_path = NULL;
    data.pipe = NULL;
    data.stdin = false;
    return (data);
}

void open_files(t_data *data, char *fileopen, char *output)
{
    data->fd_in = open(fileopen, O_RDONLY);
    if (data->fd_in == -1)
        ft_error(ft_strjoin("pipex: ", strerror(errno)));
    data->fd_out = open(output, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (data->fd_out == -1)
        ft_error(ft_strjoin("pipex: ", strerror(errno)));
}

t_data cmdn_init(int argc, char **argv, char **envp)
{
    (void)*argv;
    (void)argc;
    (void)*envp;
    t_data data;

    data = init_data(data);
    if (ft_strcmp(argv[1], "here_doc") != 0)
        data.commands_number = argc - 3;
    else
        data.commands_number = argc - 4;
    open_files(&data, argv[1], argv[argc - 1]);
    return (data);
}