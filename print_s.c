#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_string - prints strings using putchar
 *
 * @value: va_list type
 *
 * Return: char count in string
 */

int print_string(va_list value)
{
	int i;
	int n;
	char *str;

	str = va_arg(value, char *);
	if (str == NULL)
	{
		str = "(nil)";
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			_putchar(str[i]);
		}
		return (n);
	}
	else
	{
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			_putchar(str[i]);
		}
		return (n);
	}
}
