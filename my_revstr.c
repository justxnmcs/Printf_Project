/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Piscine C Day06 - Task03
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char tmp;

    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j -= 1;
        i += 1;
    }
    return (str);
}
