NAME = libft.a
INCLUDES = ./
SOURCES = ft_putnbr_fd.c   ft_putstr_fd.c   ft_strlen.c   ft_u_putnbr_fd.c \
	ft_putchar_fd.c  ft_putnbr_hex.c  ft_putstr_hex.c  ft_toupper.c

CC = gcc
FLAGS = -c -Wall -Wextra -Werror -I $(INCLUDES)
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME) $(OBJECTS)


%.o: %.c
	$(CC) $(FLAGS)  -c $< -o  $@

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re