/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** libmy.a
*/

int my_getnbr(char const*str)
{
	int i = 0;
	int isneg = 1;
	int result = 0;

	while (str[i] <= ' ')
        i += 1;
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            isneg *= -1;
        i += 1;    
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i += 1;
    }
    result *= isneg;
    return (result);
}
