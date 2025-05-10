CC= cc
CFLAGS= -Wall -Werror -Wextra
NAME=libftprintf.a

C_FILES= ft_printf.c ft_printchar.c ft_printstr.c

OBJS= $(C_FILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rsc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
