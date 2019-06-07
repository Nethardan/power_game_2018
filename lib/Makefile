##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lib Makefile
##

SRC		=	src/str_management/my_puterr.c			\
			src/str_management/my_putstr.c			\
			src/str_management/my_strlen.c			\
			src/str_management/my_strcmp.c			\
			src/file_system/fs_open_file.c			\
			src/dup_2d_char_arr.c				\
			src/ncurses/print_rectangle.c			\
			src/ncurses/create_rect.c			\

OBJ		=	$(SRC:.c=.o)

NAME		=	libmy.a

CPPFLAGS	+=	-I./include -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	cp include/my.h ../include
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) src/*~ src/my_printf/*~ src/file_system/*~		\
	src/memory_allocation/*~ src/algorithm/*~ rm *~ rm include/*~	\
	src/ncurses/*~

fclean: clean
	rm -f $(NAME)

re:	fclean all
