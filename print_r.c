#include "main.h"

/**
 * print_r - prints reversed string
 *
 * @value: va_list argument
 *
 * Return: int
 */

int print_r(va_list value)
{
	int i = 0;
	int n = 0;
	char *str;

	str = va_arg(value, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	while (str[i] != '\0')
	{
		n++;
	}

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (n);
}
