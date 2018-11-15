/*
** EPITECH PROJECT, 2018
** decimal_octal.c
** File description:
** Printf
*/

int base_memory(int nb, int b)
{
    int counter = 0;
    while (nb != 0) {
        nb = nb / b;
        counter += 1;
    }
    return (counter);
}

int base_convert(int nb, int b, int x) 
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
    my_revstr(str);
    my_put_str (str);
}