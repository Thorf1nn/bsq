/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** my_strncpy.c
*/

#include "../include/bsq.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int index = 0;
    int x = n;
    int lenght = my_strlen(src);

    while ((src[index] != '\0') && (n > 0)) {
        dest[index] = src[index];
        index++;
        n--;
    }
    if (x > lenght) {
        dest[index] = '\0';
    }
    return dest;
}
