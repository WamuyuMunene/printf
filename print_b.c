#include "main.h"

/**
 * print_b - convert unsigned int to binary
 *
 * @value: va_list arg
 *
 * Return: int binary
 */

int print_b(va_list value)
{
	int flag = 0;
	int counter = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(value, unsigned int);
	unsigned int temp;

	for (i = 0; i < 32; i++)
	{
		temp = ((a << (32 - i)) & num);
		if (temp >> (31 - i))
		{
			flag = 1;
		}
		if (flag)
		{
			b = temp >> (31 - i);
			_putchar(b + '0');
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}
