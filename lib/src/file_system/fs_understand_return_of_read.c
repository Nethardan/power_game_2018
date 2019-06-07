/*
** EPITECH PROJECT, 2018
** fs_understand_return_of_read.c
** File description:
** understand return of read
*/

#include "my.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int read_return = read(fd, buffer, size);

    if (read_return == -1)
        my_puterr("read failed\n");
    if (read_return == 0)
        my_puterr("read has nothing more to read");
    if (read_return < size)
        my_puterr("read didn't complete the entire buffer\n");
}
