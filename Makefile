SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c ft_memset.c ft_isprint.c ft_isascii.c ft_bzero.c
OBJS	= $(SRCS:.c=.o)
INCS	= -Iincludes
NAME	= libft.a
LIBC	= ar rcs
LIBR	= ranlib
CC		= gcc
FLAGS 	= -Wall -Wextra -Werror
RM		= rm -rf




.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

%.o:%.c
	 $(CC) $(FLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
