/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** libmy.a
*/

#include "my.h"

long my_put_nbr(long nb)
{
    int counter = 0;
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb < 10) {
        my_putchar(nb + '0');
        return (0);
    }
    my_put_nbr(nb / 10);
    my_putchar((nb % 10) + '0');
    return (0);
}