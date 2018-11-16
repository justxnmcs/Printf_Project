
#include "my.h"

int my_big_s(char *str)
{
    int i = 0;
    int j = 0;
    int lenght = base_convert_counter(str[i], 16, 1) - 1;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            if (lenght < 3) {
                while (j < (3 - lenght)) {
                    my_putchar('0');
                    j += 1;
                }

            }
            base_convert(str[i], 16, 1);
        }
        else
            my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
