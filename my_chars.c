/*
** EPITECH PROJECT, 2018
** my_chars.c
** File description:
** Printf
*/

#include "my.h"

int my_c(int width_value, char c)
{
	int i = 0;
	if (width_value - 1 > 0) {
		while (i < (width_value - 1)) {
			my_putchar(' ');
			i += 1;
		}
	}
	my_putchar(c);
	return (0);
}

int my_u(int width_value, int precision_value, int nb)
{
	long result = 0;
	int i = 0;
	if (nb < 0) {
		result = 4294967296 + nb;
		my_d_i(width_value, precision_value, result);
		return (0);
	}
	else
		my_d_i(width_value, precision_value, nb);
	return (0);
}