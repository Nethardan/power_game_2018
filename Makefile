##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## main Makefile
##

SRC		=	src/main.c			\
			src/menu/menu_init.c		\
			src/menu/game_settings.c	\
			src/menu/select_players.c	\
			src/menu/select_player2.c	\
			src/menu/create_players.c	\
			src/game/game_loop.c		\
			src/game/generate_map.c		\
			src/game/print.c		\
			src/game/print_map.c		\
			src/game/game_end.c		\

OBJ		=	$(SRC:.c=.o)

NAME		=	my_power

CPPFLAGS	+=	-I./include

FLAGS		=	-L./lib -lmy -g3 -lncurses

all: libmy $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

libmy:
	make -C lib/

clean:
	rm -f $(OBJ) src/*~ src/*# include/*~ include/*# *~ *#	\
	src/game/*~ src/game/*# src/menu/*~ src/menu/*#
	make -C lib/ clean

fclean: clean
	rm -f $(NAME)
	make -C lib/ fclean

re: fclean all
