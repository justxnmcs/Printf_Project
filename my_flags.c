/*
** EPITECH PROJECT, 2018
** my_flags.c
** File description:
** Printf
*/

#include "my.h"

int precision_search(char *str, int i)
{
    int result = 0;
    while (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) {
        if (str[i] == '.') {
            i += 1;
            while (str[i] >= '0' && str[i] <= '9') {
                result = ((result * 10) + (str[i] - '0'));
                i += 1;
            }
            return (result);
        }
        else
            i += 1;
    }
    return (-1);
}

int width(char *str, int i)
{
    int result = 0;
    if (str[i] >= '0' && str[i] <= '9') {
        while (str[i] >= '0' && str[i] <= '9') {
            result = ((result * 10) + (str[i] - '0'));
            i += 1;
        }
        return (result);
    }
    else
        return (0);
}





































