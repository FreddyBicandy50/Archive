NAME = push_swap
INCLUDES = ./libraries/ft_printf/includes/
pushswap_SOURCES = src/*.c libraries/ft_atoi.c libraries/ft_split.c  main.c
PRINTF = ./libraries/ft_printf/libftprintf.a

OBJECTS = $(pushswap_SOURCES:.c=.o)

CC = gcc
RM =rm -rf
CFLAGS = -Wall -Wextra -Werror -I ${INCLUDES}

all: $(NAME)

%.o: %.c 
	$(CC) -c $(CFLAGS) -c $< -o  $@

$(NAME): $(OBJECTS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(PRINTF)

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