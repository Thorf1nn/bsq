/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** init_bsq.c
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/bsq.h"
#include <stdlib.h>
#include <stdio.h>

int is_square_of_size(char **map, int y, int x, int size)
{
    for (int posy = y; posy < y + size; posy++) {
        if (map[posy] == NULL)
            return 0;
        for (int posx = x; posx < x + size; posx++) {
            if (map[posy][posx] == '\0')
                return 0;
            if (map[posy][posx] == 'o')
                return 0;
        }
    }
    return 1;
}

int init_bsq(map_info_t *map)
{
    int x = 0;
    int y = 0;

    map->map = mem_alloc_2d_array(map->rows, map->cols);
    map->map[0][0] = 9;
    for (int i = 0; map->buffer_map[i] != '\0'; i++) {
        if (map->buffer_map[i] != '.' && map->buffer_map[i] != 'o'
        && map->buffer_map[i] != '\n')
            return 0;
        if (map->buffer_map[i] == '\n') {
            y++;
            x = 0;
            continue;
        }
        map->map[y][x] = map->buffer_map[i];
        x++;
    }
    return 1;
}

int find_biggest_square_from(char **map, int y, int x)
{
    int max = 1;

    while (is_square_of_size(map, y, x, max) == 1)
        max++;
    return max - 1;
}

int process_bsq(map_info_t *map)
{
    int tmp_max = 0;
    for (int y = 0; y < map->cols; y++) {
        for (int x = 0; x < map->rows; x++) {
            if (map->map[y][x] == '.') {
                if (is_square_of_size(map->map, y, x, tmp_max + 1)) {
                    map->max_square_size = tmp_max + 1;
                    map->x = x;
                    map->y = y;
                    tmp_max++;
                }
            }
        }
    }
    return 1;
}
