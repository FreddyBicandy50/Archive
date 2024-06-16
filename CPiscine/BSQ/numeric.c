/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeric.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:48:08 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/06 22:38:35 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_numeric(char *buffer, int strlen)
{
    int i;

    i = 0;
    while (i <= strlen)
    {
        if (buffer[i] >= '0' && buffer[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

int ft_atoi(char *buffer, int len)
{
	int i;
	int num;
	num = 0;
	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9' && i < len - 3)
	{
		num = num * 10 + (buffer[i] - '0');
		i++;
	}
	return (num);
}