/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-luca.orelli
** File description:
** my_putstr.c
*/

#include "../../include/printf.h"

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
