/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:08:21 by fbicandy          #+#    #+#             */
/*   Updated: 2024/08/18 12:28:45 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;

    pid = fork();
    if(pid==-1)
        printf("error creating a child process\n");
    else if (pid == 0)
        printf("Child: I'm the child, my internal pid is %d.\n", pid);
    else if (pid > 0)
        printf("Parent: I'm the parent, my child's pid is %d.\n", pid);

    return (0);
}