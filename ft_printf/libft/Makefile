NAME = libft.a
SOURCES =ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c ft_u_putnbr_fd.c \
	ft_putchar_fd.c ft_putnbr_hex.c ft_putstr_hex.c ft_toupper.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re