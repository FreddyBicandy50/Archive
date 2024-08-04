LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS =  *.c 
CC = gcc
FLAGS = -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(LIBFT)
		ar rc $(NAME) $(OBJS) $(LIBFT)
		ranlib $(NAME)


$(LIBFT):
			@make -C ./libft

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all