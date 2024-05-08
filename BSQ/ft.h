/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:45:12 by fbicandy          #+#    #+#             */
/*   Updated: 2024/05/06 22:31:49 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H
void pt_str(char *str);
void mapWidth_validation(char **table, int lines, int width);
void mapHeight_validation(char *firstline, long lines);
void mapfillables_validation(char *str);
void ft_fillrows(char **rows, char *file_char, int row_count);
int row_size(int *rows, int row_count, int file_size);
int line_width(char **table, int lines);
int ft_strlen(char *str);
int read_file(char *file_ptr, int read_count);
int ft_filebytes(int, char *);
int nbofrows(int file_size);

#endif