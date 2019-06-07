/*
** EPITECH PROJECT, 2018
** dup_2d_char_arr.c
** File description:
** duplicates 2d char array
*/

#include "my.h"

char **dup_2d_char_arr(char **src, char **dest, uint_t row)
{
    uint_t col = 0;
    uint_t j = 0;
    uint_t g = 0;

    dest = malloc(sizeof(char *) * row);
    for (uint_t i = 0; i < row; i += 1) {
        for (; src[i][g] != '\n' && src[i][g] != '\0'; g += 1);
        dest[i] = malloc(sizeof(char) * g);
        g = 0;
    }
    for (uint_t i = 0; i < row; i += 1) {
        for (j = 0; src[i][j] != '\n' && src[i][j] != '\0'; j += 1)
            dest[i][j] = src[i][j];
        dest[i][j] = src[i][j];
    }
    return (dest);
}
