NAME = libft.a
SOURCES = \
ft_isalnum.c \
ft_strchr.c  \
ft_isalpha.c \
ft_isdigit.c \
ft_strlen.c  \
ft_tolower.c \
ft_toupper.c \
ft_isascii.c \
ft_isprint.c \
ft_memset.c  \
ft_memcpy.c  \
ft_memmove.c  \
ft_strlcpy.c  \
ft_strlcat.c  \
ft_strrchr.c  \
ft_strncmp.c  \
ft_bzero.c 
BSOURCES = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS) $
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re