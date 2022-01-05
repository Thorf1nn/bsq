/*
** EPITECH PROJECT, 2021
** boottabap_bsq
** File description:
**  mem_alloc_2d_array.c
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/bsq.h"

char **mem_alloc_2d_array(int nb_rows , int nb_cols)
{
    int var = 0;
    char **tab = malloc(sizeof(char *) * nb_rows + 1);

    while (var < nb_rows) {
        tab[var] = malloc(nb_cols + 1);
        var += 1;
    }
    return tab;
}
