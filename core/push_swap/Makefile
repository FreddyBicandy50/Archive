NAME = push_swap
INCLUDES = ./
PRINTF = ./libraries/ft_printf/libftprintf.a


CC = gcc
FLAGS = -c -Wall -Wextra -Werror -I${INCLUDES}
SRCS = main.c\
	src/utils.c  \
	libraries/ft_atoi.c libraries/ft_split.c  

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o  $@

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