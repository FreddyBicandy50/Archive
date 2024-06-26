# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 12:28:36 by fbicandy          #+#    #+#              #
#    Updated: 2024/06/26 17:16:24 by fbicandy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
ft_putchar_fd.c \
ft_itoa.c 		\
ft_utoa.c 		\
ft_putstr_fd.c	\
ft_putnbr_fd.c 	\
ft_strlen.c 	\
ft_toupper.c 	\
ft_putnbr_hex.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re