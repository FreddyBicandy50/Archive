NAME = pipex
INCLUDES = ./src/
PRINTF = ./ft_printf/libftprintf.a
LIBFTDIR = ./ft_printf

CC = gcc
CFLAGS = -Wall -Werror -Wextra

Libft = ./libft/ft_strcmp.c ./libft/ft_strjoin.c ./libft/ft_strlen.c
SRCS = pipex.c src/pipex_utils.c 

OBJECTS = $(SRCS:.c=.o) 

all: $(NAME)

$(NAME): $(OBJECTS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(PRINTF) $(Libft)

$(PRINTF):
	@make -C ./ft_printf

z: clean

clean:
	@make clean -C ./ft_printf
	rm -f $(OBJECTS)
	@clear

fclean: clean 
	@make fclean -C ./ft_printf
	rm -f $(NAME)

re: fclean all
.PHONY: all bonus clean fclean re
