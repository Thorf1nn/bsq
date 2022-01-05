/*
** EPITECH PROJECT, 2021
** B-PSU-100-MPL-1-1-myprintf-luca.orelli
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/printf.h"

void disp_stdarg(char e, va_list list)
{
    switch (e) {
        case 's':
            my_putstr(va_arg(list, char * ));
            break;
        case 'c':
            my_putchar(va_arg(list, int));
            break;
        case 'i':
            my_put_nbr(va_arg(list, long int));
            break;
        case 'd':
            my_put_nbr(va_arg(list, long int));
            break;
        case '%':
            my_putchar('%');
    }
}

void stdarg_analyse(char *s, va_list list)
{
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            disp_stdarg(s[i + 1], list);
            i++;
        } else {
            my_putchar(s[i]);
        }
    }
}

int my_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);
    stdarg_analyse(str, list);
    va_end(list);
    return (0);
}
