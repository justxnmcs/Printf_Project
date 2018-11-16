
#include "my.h"

int counter_calculator(int nb)
{
    int counter = 0;
    int test = ultimate_value(nb);
    while (test > 0) {
        test = test / 10;
        counter += 1;
    }
    return (counter);
}

int ultimate_value(int nb)
{
    int result = -1;
    if (nb > 0)
        return (nb);
    else {
        result *= nb;
        return (result);
    }
}

int my_d_i_test(int width_value, int precision_value, int nb)
{
    if (width_value == 0) {
        if (precision_value == -1)
            return (1);
    }
    return (0);
}

int my_sub_d_i(int width_value, int precision_value, int nb, int counter)
{
    int k = 0;
    int j = 0;
    if (nb < 0)
        width_value -= 1;
    if (precision_value == -1) {
        while (k != (width_value - counter)) {
            my_putchar(' ');
            k += 1;
        }
    }
    else {
        if ((width_value - precision_value) > 0) {
            while (j != (width_value - precision_value)) {
                my_putchar(' ');
                j += 1;
            }
        }
    }
    return (0);
}

int my_d_i(int width_value, int precision_value, int nb)
{
    int i = 0;
    int test = ultimate_value(nb);
    int counter = counter_calculator(nb);
    if (precision_value == 0)
        return (0);
    if (my_d_i_test(width_value, precision_value, nb) == 1) {
        my_put_nbr(nb);
        return (0);
    }
    my_sub_d_i(width_value, precision_value, nb, counter);
    if (nb < 0)
        my_putchar('-');
    if ((precision_value - counter) > 0) {
        while (i != (precision_value - counter)) {
            my_putchar('0');
            i += 1;
        }
    }
    my_put_nbr(ultimate_value(nb));
    return (0);
}