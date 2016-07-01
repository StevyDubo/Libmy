GCC =	gcc
NAME =	libmy.a
SRC =	my_putchar.c \
	my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcat.c \
	my_strncat.c \
	my_strstr.c \
	my_str_to_wordtab.c \
	my_strdup.c
OBJ =	$(SRC:%.c=%.o)
RM =	rm -f

all :	$(NAME)

$(NAME):	$(OBJ)
		ar r $(NAME) $^
		ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
