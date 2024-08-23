/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:33:57 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/23 18:24:10 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/pipex.h"

int main(int argc, char *argv[], char *envp[])
{
    t_data data;
    (void)data;

    if ((argc < 5 && !argv[1]) || (argc < 5 && !ft_strcmp(argv[1], "here_doc") == 0))
        ft_error("pipex: Usage: ./pipex file1 cmd1 cmd2 ... cmdn file2.\n");
    else if (argc < 6 && argv[1] && ft_strcmp(argv[1], "here_doc") == 0)
        ft_error("pipex: Usage: ./pipex here_doc LIMITER cmd1 cmd2 ... cmdn file2.\n");
    else
    {
        data = cmdn_init(argc, argv, envp);
    }
    return (0);
}
