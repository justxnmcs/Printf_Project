/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Printf
*/

int my_strlen(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
        i += 1;
    return (i);
}
