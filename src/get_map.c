/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** get_map.c
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/bsq.h"
#include <stdlib.h>
#include <stdio.h>

int get_map(char const *filepath, map_info_t *map)
{
    int fd = open(filepath, O_RDONLY);
    struct stat st = { 0 };

    if (fd == -1)
        return 0;
    if (stat(filepath, &st) == -1)
        return 0;
    map->buffer_map = malloc(sizeof(char) * (st.st_size + 1));
    for (int i = 0; i <= st.st_size; i++)
        map->buffer_map[i] = '\0';
    if (read(fd, map->buffer_map, st.st_size) == -1)
        return 0;
    return 1;
}

int get_map_info(map_info_t *map)
{
    if (get_number_of_lines(map) == 0)
        return 0;
    if (get_number_of_cols(map) == 0)
        return 0;
    return 1;
}
