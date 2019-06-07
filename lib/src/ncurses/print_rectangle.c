/*
** EPITECH PROJECT, 2019
** print_rectangle.c
** File description:
** print a rectangle givent as parameter
*/

#include "my.h"

static void print_part(WINDOW *win, rect_t rect, int x, int y)
{
    if (y == rect.y)
        if (x == rect.x)
            mvwaddch(win, y, x, ACS_ULCORNER);
        else if (x == rect.x + rect.col - 1)
            mvwaddch(win, y, x, ACS_URCORNER);
        else
            waddch(win, ACS_HLINE);
    else if (y == rect.y + rect.row - 1)
        if (x == rect.x)
            mvwaddch(win, y, x, ACS_LLCORNER);
        else if (x == rect.x + rect.col - 1)
            mvwaddch(win, y, x, ACS_LRCORNER);
        else
            waddch(win, ACS_HLINE);
    else
        if (x == rect.x || x == rect .x + rect.col - 1)
            mvwaddch(win, y, x, ACS_VLINE);
}

void print_rectangle(WINDOW *win, rect_t rect)
{
    for (int i = rect.y; i < rect.y + rect.row; i += 1)
        for (int j = rect.x; j < rect.x + rect.col; j += 1)
            print_part(win, rect, j, i);
    refresh();
}
