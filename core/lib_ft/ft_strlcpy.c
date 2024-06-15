/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:05:49 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/14 21:52:24 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = 0;
    size_t i = 0;

    // Find the length of src
    while (src[src_len] != '\0') {
        src_len++;
    }

    // Copy up to size - 1 characters if size is not 0
    if (size != 0) {
        while (i < size - 1 && src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        // Null-terminate the destination string
        dest[i] = '\0';
    }

    // Return the total length of src
    return src_len;
}