/*
** EPITECH PROJECT, 2018
** my_s.c
** File description:
** Printf
*/

#include "my.h"

int my_s(char *str, int width_value, int precision_value)
{
    int i = 0;
    if (width_value != 0) {
        if (precision_value > 0)
            my_secondsub_s(str, width_value, precision_value);
        else if (precision_value == 0)
            my_s_loop(str, width_value, precision_value, 0);
        else {
            if (width_value - my_strlen(str) > 0) {
                my_s_loop(str, width_value, precision_value, my_strlen(str));
                my_put_str(str);
            }
        }
    }
    else 
        my_sub_s(str, width_value, precision_value);
    return (0);
}

int my_sub_s(char *str, int width_value, int precision_value)
{
    int i = 0;
    if (precision_value > 0) {
        while (i != precision_value) {
            my_putchar(str[i]);
            i += 1;
        }
    }
    else if (precision_value == 0)
        return (0);
    else
        my_put_str(str);
    return (0);
}

int my_s_loop(char *str, int width_value, int precision_value, int x)
{
    int i = 0;
    while (i != (width_value - x)) {
        my_putchar(' ');
        i += 1;
    }
    return (0);
}

int my_secondsub_s(char *str, int width_value, int precision_value)
{
    int i = 0;
    int j = 0;
    while (i != (width_value - precision_value)) {
        my_putchar(' ');
        i += 1;
    }
    while (j != precision_value) {
        my_putchar(str[j]);
        j += 1;
    }
    return (0);
}
