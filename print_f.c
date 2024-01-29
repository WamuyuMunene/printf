#include "main.h"

/**
 * print_f - precision / floats
 *
 * @value: va_list argument
 *
 * Return: int
 */

int print_f(va_list value)
{
	double num;
	int precision;
	int counter = 0;

	num = va_arg(value, double);
	precision = va_arg(value, int);

	counter += print_fp(num, precision);

	return (counter);
}
