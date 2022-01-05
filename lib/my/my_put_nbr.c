/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/printf.h"

int my_put_nbr(long int nb)
{
    int var = 0;

    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_putchar('2');
            nb = nb + 2000000000;
        }
        nb = -nb;
    }
    if (nb == 10) {
        my_putchar('1');
    }
    var = nb % 10;
    if (nb > 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar(var + 48);
    return 0;
}
