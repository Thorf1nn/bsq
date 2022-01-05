/*
** EPITECH PROJECT, 2021
** task02
** File description:
** my.h
*/

#ifndef PRINTF_H_
    #define PRINTF_H_
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>

int my_putstr(char *str);

void my_putchar(char c);

int my_put_nbr(long int nb);

void disp_stdarg(char e, va_list list);

void stdarg_analyse(char *s, va_list list);

int my_printf(char *str, ...);

#endif
