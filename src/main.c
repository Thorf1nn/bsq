/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** main.c
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/bsq.h"
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    map_info_t map = { 0 };

    if (ac != 2)
        return 84;
    if (get_map(av[1], &map) == 0)
        return 84;
    if (get_map_info(&map) == 0)
        return 84;
    if (init_bsq(&map) == 0)
        return 84;
    if (process_bsq(&map) == 0)
        return 84;
    for (int i = 0; map.map[i] != NULL; i++) {
        for (int j = 0; map.map[i][j] != '\0'; j++) {
            if (i >= map.y && i < map.y + map.max_square_size &&
            j >= map.x && j < map.x + map.max_square_size)
                my_printf("x");
            else
                my_printf("%c", map.map[i][j]);
        }
        my_printf("\n");
    }
    return 0;
}
