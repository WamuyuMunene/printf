#include "main.h"

/**
 * print_XS - prints hexadecimal(upper)
 *
 * @num: unsigned long int
 *
 * Return: int
 */

int print_XS(unsigned int num)
{
	int i;
	int counter = 0;
	int *hex;
	unsigned int holder;

	holder = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	hex = malloc(sizeof(long int) * counter);
	if (hex == NULL)
		return (0);
	for (i = 0; i < counter; i++)
	{
		hex[i] = holder % 16;
		holder = holder / 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		if (hex[i] < 10)
		{
			_putchar(hex[i] + '0');
		}
		else
		{
			_putchar(hex[i] - 10 + 'A');
		}
	}
	free(hex);
	return (counter);
}
