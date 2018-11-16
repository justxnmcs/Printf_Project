/*
** EPITECH PROJECT, 2018
** my_number.c
** File description:
** Printf
*/

#include "my.h"

int counter_calculator(long nb)
{
    int counter = 0;
    long test = 0;
    if (nb < 0)
        test = ultimate_value(nb);
    else
        test = nb;
    if (nb == 0)
        counter = 1;
    else {
        while (test > 0) {
            test = test / 10;
            counter += 1;
        }
    }
    return (counter);
}

int ultimate_value(long nb)
{
    int result = -1;
    if (nb > 0)
        return (nb);
    else {
        result *= nb;
        return (result);
    }
}

int my_d_i(int width_value, int precision_value, long nb)
{
    int is_neg = 0;
    int counter = counter_calculator(nb);
    if (nb == 0) {
        if (precision_value == 0)
            return (0);
    }
    if (nb < 0) {
        width_value -= 1;
        nb = ultimate_value(nb);
        is_neg = 1;
    }
    if (precision_value <= 0)
        my_d_i_test(width_value, precision_value, nb, counter);
    if (precision_value > counter)
        my_sub_d_i(width_value, precision_value, nb, counter, is_neg);
    return (0);
}

int my_sub_d_i(int width_value, int precision_value, long nb, int counter, int is_neg)
{
    int j = 0;
    int k = 0;
    if ((width_value - precision_value) > 0) {
        while (j < (width_value - precision_value)) {
            my_putchar(' ');
            j += 1;
        }
        if (is_neg == 1)
            my_putchar('-');
        while (k < precision_value - counter) {
            my_putchar('0');
            k += 1;
        }
    }
    my_put_nbr(nb);
    return (0);
}

int my_d_i_test(int width_value, int precision_value, long nb, int counter)
{
    int i = 0;
    if ((width_value - counter) > 0) {
        while (i < (width_value - counter)) {
            my_putchar(' ');
            i += 1;
        }
    }
    my_put_nbr(nb);
    return (0);
}

