INCLUDES = ./includes
LIBFT = ./libft/libft.a
NAME = libftprintf.a


CC = gcc
FLAGS = -c -Wall -Wextra -Werror -I$(INCLUDES)
SRCS =  ft_printf.c 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c 
	$(CC) -c $(FLAGS) -c $< -o  $@

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(FLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):	
			@make -C ./libft
clean :
	@make clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	@make fclean -C ./libft
	rm -rf $(NAME)

re : fclean all