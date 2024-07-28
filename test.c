/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:42:14 by fbicandy          #+#    #+#             */
/*   Updated: 2024/07/26 01:36:36 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "42Beirut/core/gnl/get_next_line.h"

int main(void)
{
    int fd;
    int i;
    char *line;
    char *folders;
    char folder_name[128];

    system(" ls -la | grep 'dr' | awk '{print($9)}' | grep -v .ssh | grep -v .local | grep -v .config | grep -v .loaders | xargs >out.txt");
    fd = open("out.txt", O_RDONLY);
    while ((line = get_next_line(fd)))
        folders = line;

    i = 0;
    while (*folders != '\0')
    {
        if (*folders != ' ')
        {
            folder_name[i] = *folders;
            i++;
        }
        else
            i = 0;
        folders++;
    }
    print("%s", folder_name);
    close(fd);
    return (0);
}