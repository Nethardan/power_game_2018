/*
** EPITECH PROJECT, 2019
** create_rect.c
** File description:
** create a rect_t structure
*/

#include "my.h"

rect_t create_rect(uint_t x, uint_t y, uint_t row, uint_t col)
{
    rect_t rect;

    rect.x = x;
    rect.y = y;
    rect.row = row;
    rect.col = col;
    return (rect);
}
