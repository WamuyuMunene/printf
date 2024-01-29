#include "main.h"

/**
 * print_u - prints %u
 *
 * @value: va_List argument
 *
 * Return: i length of printed char
 */

int print_u(va_list value)
{
	int i = 0;
	unsigned int num;
	int digit;

	num = va_arg(value, unsigned int);

	do {
		i++;
		digit = num % 10;
		_putchar(digit + '0');
		num = num / 10;
	} while (num > 0);

	return (i);
}
