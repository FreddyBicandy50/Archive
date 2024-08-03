NAME = push_swap
INCLUDES= libraries/libft/libft.h  push_swap.h  
libft_SOURCES = libraries/libft/*.c
ft_printf_SOURCES = libraries/*.c
pushswap_SOURCES = src/*.c main.c


OBJECTS = $(libft_SOURCES:.c=.o) $(ft_printf_SOURCES:.c=.o) $(pushswap_SOURCES:.c=.o)

CC = gcc
RM =rm -rf
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $?

%.o: %.c ${INCLUDES}
	$(CC) -c $(CFLAGS) -c $< -o  $@

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re