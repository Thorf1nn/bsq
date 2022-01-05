/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** load_map.c
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/bsq.h"
#include <stdlib.h>
#include <stdio.h>

int get_number_of_lines(map_info_t *map)
{
    int line_len = 0;
    char *first_line = NULL;

    while (map->buffer_map[line_len] != '\n'
    && map->buffer_map[line_len] != '\0') {
        if (map->buffer_map[line_len] < '0'
        && map->buffer_map[line_len] > '9')
            return 0;
        line_len += 1;
    }
    if (map->buffer_map[line_len] == '\0')
        return 0;
    first_line = my_strndup(map->buffer_map, line_len);
    map->buffer_map += (line_len + 1);
    map->rows = my_atoi(first_line);
    map->rows = line_len;
    return 1;
}

int get_number_of_cols(map_info_t *map)
{
    int line_len = 0;

    while (map->buffer_map[line_len] != '\n'
    && map->buffer_map[line_len] != '\0') {
        if (map->buffer_map[line_len] > '.'
        && map->buffer_map[line_len] < 'o')
            return 0;
        line_len += 1;
    }
    if (map->buffer_map[line_len] == '\0')
        return 0;
    map->cols = line_len;
    return 1;
}
