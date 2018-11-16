/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** Printf
*/

#include "my.h"

void my_put_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}
