/*
** EPITECH PROJECT, 2018
** decimal_octal.c
** File description:
** Printf
*/

#include "my.h"

int base_memory(long nb, int b)
{
    int counter = 0;
    while (nb != 0) {
        nb = nb / b;
        counter += 1;
    }
    return (counter);
}

int base_convert(long nb, int b, int x) 
{
    char str[base_memory(nb, b)];
    str[base_memory(nb, b)] = '\0';
    int i = 0;
    while (nb != 0) {
        if ((nb % b) >= 10) {
            if (x == 1)
                str[i] = ((nb % b) + ('a' - 10));
            if (x == 2)
                str[i] = ((nb % b) + ('A' - 10));
        }
        else
            str[i] = ((nb % b) + '0');
        nb = nb / b;
        i += 1;
    }
    my_revstr(str);;
    my_put_str(str);
    return (0);
}

int base_convert_counter(long nb, int b, int x) 
{
    char str[base_memory(nb, b)];
    str[base_memory(nb, b)] = '\0';
    int i = 0;
    int counter = 0;
    while (nb != 0) {
        if ((nb % b) >= 10) {
            if (x == 1)
                str[i] = ((nb % b) + ('a' - 10));
            if (x == 2)
                str[i] = ((nb % b) + ('A' - 10));
        }
        else
            str[i] = ((nb % b) + '0');
        nb = nb / b;
        i += 1;
        counter += 1;
    }
    return(counter);
}

int my_p(unsigned long nb)
{
    my_putchar('0');
    my_putchar('x');
    base_convert(nb, 16, 1);
    return (0);
}