#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list value);
int print_s(va_list value);
int print_pct(void);
int print_i(va_list value);
int print_d(va_list value);
int print_b(va_list value);
int print_u(va_list value);
int print_o(va_list value);
int print_x(va_list value);
int print_X(va_list value);
int print_XS(unsigned int num);
int print_S(va_list value);
int print_xs(unsigned long int num);
int print_p(va_list value);
int print_r(va_list value);
int print_R(va_list value);
int print_f(va_list value);
int print_dp(int num);
int print_fp(double num, int precision);

#endif
