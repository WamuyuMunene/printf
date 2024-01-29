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
	int i = 0;
	int num;
	int counter;
	int digit;

	num = va_arg(value, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}

	counter = num;

	do {
		counter = counter / 10;
		i++;
	} while (counter > 0);

	while (i > 0)
	{
		digit = num % 10;
		_putchar(digit + '0');
		num = num / 10;
		i--;
	}
	return (i);
}
