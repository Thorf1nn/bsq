/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** my_strndup.c
*/

#include <string.h>
#include <stdlib.h>
#include "../include/bsq.h"

char *my_strndup(const char *s, size_t n)
{
    char *dest = malloc(sizeof(char *) * (n + 1));

    my_strncpy(dest, s, n);
    dest[n] = 0;

    return dest;
}
