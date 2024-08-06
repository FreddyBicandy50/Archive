# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 22:53:03 by fbicandy          #+#    #+#              #
#    Updated: 2024/08/06 23:00:21 by fbicandy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INCLUDES = ./
PRINTF = ./libraries/ft_printf/libftprintf.a
LIBFTDIR = ./libraries/ft_printf


CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = main.c\
	src/utils.c  \
	libraries/ft_atoi.c libraries/ft_split.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJECTS) $(PRINTF) 
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME) $(PRINTF)

$(PRINTF):	
			@make -C ./libraries/ft_printf

clean:	
		@make clean -C ./libraries/ft_printf
		rm -f $(OBJECTS) 

fclean: clean
	@make fclean -C ./libraries/ft_printf
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re