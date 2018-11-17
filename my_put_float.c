/*
** EPITECH PROJECT, 2018
** my_put_float.c
** File description:
** Printf
*/

#include "my.h"

int multiplicator(int nb)
{
    int n = 1;
    int i = 0;
    while (i != nb) {
        n *= 10;
        i += 1;
    }
    return (n);
}

double ultimate_float_value(double nb)
{
    double result = -1;
    if (nb > 0)
        return (nb);
    else {
        result *= nb;
        return (result);
    }
}

int my_put_float(double nb, int width_value, int precision_value)
{   
    if (precision_value == -1 || precision_value == 0)
        precision_value = 6;
    my_display_counter(nb, width_value, my_float_counter(nb, precision_value));
    if (nb < 0)
        my_putchar('-');
    nb = ultimate_float_value(nb);
    int d = (int)nb;
    int result = 0;
    my_put_nbr(d);
    my_putchar('.');
    nb = nb - d;
    nb *= multiplicator(precision_value);
    result = (int)nb;
    my_put_nbr(result);
    return (0);
}

int my_float_counter(double nb, int precision_value)
{
    int d = (int)nb;
    int counter = counter_calculator(d);
    counter += 1;
    counter += precision_value;
    return (counter);
}

int my_display_counter(double nb, int width_value, int counter)
{
    int i = 0;
    if (nb < 0)
        width_value -= 1;
    if ((width_value - counter) > 0) {
        while (i != (width_value - counter)) {
            my_putchar(' ');
            i += 1;
        }
    }
    return (0);
}
