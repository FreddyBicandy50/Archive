/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:51:00 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/14 23:08:27 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h> // for size_t

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    size_t dest_len = 0;
    size_t src_len = 0;
    size_t i;

    // Calculate the length of dest
    while (dest_len < size && dest[dest_len] != '\0') {
        dest_len++;
    }

    // Calculate the length of src
    while (src[src_len] != '\0') {
        src_len++;
    }

    // If size is less than or equal to dest_len, return size + src_len
    if (size <= dest_len) {
        return size + src_len;
    }

    // Start concatenation from the end of dest
    i = 0;
    while (dest_len + i < size - 1 && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Null-terminate dest
    dest[dest_len + i] = '\0';

    // Return the total length of the string it tried to create
    return dest_len + src_len;
}
