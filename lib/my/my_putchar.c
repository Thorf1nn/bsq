/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include "../../include/printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
