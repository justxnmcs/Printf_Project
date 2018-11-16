/*
** EPITECH PROJECT, 2018
** my_base.c
** File description:
** Printf
*/

#include "my.h"

int my_b(long nb, int b, int x, int width_value, int precision_value)
{
    int j = 0;
    int counter = base_convert_counter(nb, b, x);
    if (precision_value > counter) {
        my_sub_b(width_value, precision_value);
        while (j < (precision_value - counter)) {
            my_putchar('0');
            j += 1;
        }
    }
    else {
        my_sub_b(width_value, counter);
    }
    base_convert(nb, b, x);
    return (0);
}

int my_sub_b(int width_value, int precision_value)
{
    int i = 0;
    if (width_value > precision_value) {
        while (i < (width_value - precision_value)) {
            my_putchar(' ');
            i += 1;
        }
    }
    return (0);
}