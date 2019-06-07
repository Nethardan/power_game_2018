/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** include lib
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

#define TRUE 1
#define FALSE 0
#define RESTART 2
#define IS_IN(x, down, up) (x >= down && x <= up ? TRUE : FALSE)
#define ISNUM(x) (x >= '0' && x <= '9' ? 0 : -1)
#define ISALPHA(x) ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') ?  \
                    TRUE : FALSE)
#define WLOWER(x, y) (x < y ? x : y)
#define WUPPER(x, y) ((x) > (y) ? x : y)
#define uint_t unsigned int
#define STOP 42
#define ISARROW(x) (x == KEY_UP || x == KEY_DOWN || x == KEY_LEFT       \
                    || x == KEY_RIGHT ? TRUE : FALSE)

typedef struct rectangle
{
    uint_t x;
    uint_t y;
    uint_t row;
    uint_t col;
} rect_t;

typedef struct coords {
    int x;
    int y;
} coords_t;

typedef struct power
{
    int nb_players;
    int power;
    char **players_names;
    char *tocken;
    int *color;
    int **map;
    coords_t *size;
} power_t;

// MENU
power_t *menu_init(power_t *game);
int game_settings(power_t *game);
int select_players(power_t *game);
int create_players(power_t *game);
int choose_color(int i);
char choose_tocken(int i);
char *ch_color(int color);
int *get_selected_player(int i, int key, int *selected, power_t *game);
int print_names_error(power_t *game, int nb);

// GAME
void game_loop(power_t *game);
coords_t *get_size(int nb_player, int power, coords_t *size);
int **generate_map(int **map, coords_t *size);
void print(power_t *game, int pturn, int nb_tocken, int pos);
void print_map(int **map, coords_t *size, char *tocken, int nb_players);
int game_end(power_t *game, int pos, int p);

//NCURSES
void print_rectangle(WINDOW *win, rect_t rect);
rect_t create_rect(uint_t x, uint_t y, uint_t row, uint_t col);

//String management
int my_getnbr(char const *str);
void my_putstr(char const *str);
void my_puterr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);

// File system
int fs_open_file(char const *filepath);
void fs_understand_return_of_read(int fd, char *buffer, int size);
int fs_get_number_from_first_line(char *buffer);

char **dup_2d_char_arr(char **src, char **dest, uint_t row);
char *error_man(char *buffer);

#endif
