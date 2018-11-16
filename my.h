#ifndef MY_H_
#define MY_H_

int base_memory(long nb, int b);
int base_convert(long nb, int b, int x);
int base_convert_counter(long nb, int b, int x);
int my_p(unsigned long nb);
int my_big_s(char *str);
int my_c(int width_value, char c);
int my_u(int width_value, int nb);
int flags_search(char *str, int i);
char *flag(char *str, int i);
int precision_search(char *str, int i);
int width(char *str, int i);
int my_getnbr(char const*str);
int counter_calculator(int nb);
int ultimate_value(int nb);
int my_d_i_test(int width_value, int precision_value, int nb);
int my_sub_d_i(int width_value, int precision_value, int nb, int counter);
int my_d_i(int width_value, int precision_value, int nb);
int my_printf(char *str, ...);
int multiplicator(int nb);
double ultimate_float_value(double nb);
int my_put_float(double nb, int width_value, int precision_value);
int my_float_counter(double nb, int precision_value);
int my_display_counter(double nb, int width_value, int counter);
long my_put_nbr(long nb);
void my_putchar(char c);
void my_put_str(char *str);
char *my_revstr(char *str);
int my_s(char *str, int width_value, int precision_value);
int my_sub_s(char *str, int width_value, int precision_value);
int my_s_loop(char *str, int width_value, int precision_value, int x);
int my_secondsub_s(char *str, int width_value, int precision_value);
int my_strlen(char *str);

#endif