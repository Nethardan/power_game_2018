/*
** EPITECH PROJECT, 2018
** fs_open_file.c
** File description:
** open a file
*/

#include "my.h"

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        my_puterr("FAILURE\n");
    return (fd);
}
