#include "main.h"
#include <stdarg.h>

/**
 * print_char - this prints type char using putchar
 *
 * @value: va_list type
 *
 * Return: 1 or 0
 */

int print_char(va_list value)
{
	char str;

	str = va_arg(value, int);

	if (str == '\0')
	{
		return (0);
	}
	_putchar(str);
	return (1);
}
