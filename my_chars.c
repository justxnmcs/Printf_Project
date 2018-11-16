
#include "my.h"

int my_c(int width_value, char c)
{
	int i = 0;
	if (width_value == 0) {
		my_putchar(c);
}
	else {
		while (i != (width_value - 1)) {
			my_putchar(' ');
			i += 1;
		}
		my_putchar(c);
	}
	return (0);
}

int my_u(int width_value, int nb)
{
	long result = 0;
	int i = 0;
	if (nb < 0) {
		result = 4294967296 - (ultimate_value(nb));
		my_put_nbr(result);
		return (0);
	}
	if (width_value != 0) {
		while (i != (width_value - counter_calculator(nb))) {
			my_putchar(' ');
			i += 1;
		}
	}
	my_put_nbr(nb);
	return (0);
}