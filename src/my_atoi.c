/*
** EPITECH PROJECT, 2021
** bootstrap_evalexpr
** File description:
** my_atoi.c
*/

#include <stdio.h>

int my_atoi (char *str)
{
    int i = 0;
    int s_result = 0;
    int sign = 0;

    if (str[i] == '-') {
        sign = '-';
        i++;
    }
    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9')) {
            s_result *= 10;
            s_result += str[i] - '0';
        } else
            break;
        i++;
    }
    if (sign == '-') {
        return -s_result;
    } else
        return s_result;
}
