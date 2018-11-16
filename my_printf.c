/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>

int my_printf(char *str, ...)
{
    int i = 0;
    int counter = 0;
    int digit_counter = 0;
    va_list ap;
    va_start(ap, str);
    int width_value = 0;
    int precision_value = -1;

    while (str[i] != '\0') {
        if (str[i] == '%') {
            i += 1;
            width_value = width(str, i);
            precision_value = precision_search(str, i);
            while(str[i] < '%' || (str[i] > '%' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
                i += 1;
            if (str[i] == 'd' || str[i] == 'i')
                my_d_i(width_value, precision_value, va_arg(ap, int));
            if (str[i] == 'u')
                my_u(width_value, va_arg(ap, int));
            if (str[i] == 'c')
                my_c(width_value, va_arg(ap, int));
            if (str[i] == 's')
                my_s(va_arg(ap, char *), width_value, precision_value);
            if (str[i] == 'o')
                base_convert(va_arg(ap, int), 8, 0);
            if (str[i] == 'b')
                base_convert(va_arg(ap, int), 2, 0);
            if (str[i] == 'x')
                base_convert(va_arg(ap, int), 16, 1);
            if (str[i] == 'X')
                base_convert(va_arg(ap, int), 16, 2);
            if (str[i] == '%')
                my_putchar('%');
            if (str[i] == 'f')
                my_put_float(va_arg(ap, double), width_value, precision_value);
            if (str[i] == 'p')
                my_p(va_arg(ap, unsigned long));
            if (str[i] == 'S')
                my_big_s(va_arg(ap, char *));

        }
        else 
            my_putchar(str[i]);
        i += 1;
    }
    va_end(ap);
    return (0);
}

/*int main(void)
{
    my_printf("salut les amis %4c", 'e');
}*/