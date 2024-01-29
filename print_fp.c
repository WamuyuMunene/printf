#include "main.h"

/**
 * print_fp - print floats/ precision
 * called in other functions
 *
 * @num: double
 * @precision: int
 *
 * Return: int
 */

int print_fp(double num, int precision)
{
	int counter = 0;
	int integer;
	int decimal;

	integer = (int)num;
	decimal = (int)((num - integer) * pow(10, precision));

	counter += print_dp(integer);
	_putchar('.');
	counter++;

	counter += print_dp(decimal);

	return (counter);
}
