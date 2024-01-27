#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list value);
int print_string(va_list value);
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

#endif
