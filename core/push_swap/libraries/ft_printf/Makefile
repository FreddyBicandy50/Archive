LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS =  *.c 
CC = gcc
FLAGS = -Wall -Wextra -Werror -I ./includes/

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(LIBFT)
		ar rc $(NAME) $(LIBFT) $(OBJS)
		ranlib $(NAME) $(LIBFT)


$(LIBFT):
			@make -C ./libft

all : $(NAME)

clean :
	@make clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	@make fclean -C ./libft
	rm -rf $(NAME)

re : fclean all