#include "main.h"

/**
 * print_dp - called in int/float functions
 *
 * @num: int
 *
 * Return: int
 */

int print_dp(int num)
{
	int counter = 0;

	if (num / 10)
	{
		counter += print_dp(num / 10);
	}
	_putchar((num % 10) + '0');
	counter++;

	return (counter);
}
