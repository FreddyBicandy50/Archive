NAME = libft.a

SRCS =  *.c 
CC = gcc
FLAGS = -Wall -Wextra -Werror -I ./

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all