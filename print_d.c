#include "main.h"

/**
 * print_d - prints %d
 *
 * @value: va_List argument
 *
 * Return: i length of printed char
 */

int print_d(va_list value)
{
	int num;
	int counter = 0;

	num = va_arg(value, int);

	if (num >= 0)
	{
		_putchar(' ');
		counter++;
	}

	counter += print_dp(num);

	return (counter);
}
