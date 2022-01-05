/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** my_strlen.c
*/

#include "../include/bsq.h"

int my_strlen(char const *str )
{
    int b = 0;

    while (str[b] != '\0') {
        b++;
    }
    return b;
}
