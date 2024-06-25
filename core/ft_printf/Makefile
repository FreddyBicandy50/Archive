LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS =  ft_printf.c 
CC = gcc
FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
