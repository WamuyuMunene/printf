#include "main.h"

/**
 * print_wid - prints width
 * @fmt: Formatted string to print arguments
 * @i: arguments to be printed
 * @list: arguments
 *
 * Return: (1)
 */
int print_wid(const char *fmt, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; fmt[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(fmt[curr_i]))
		{
			width *= 10;
			width += fmt[curr_i] - '0';
		}
		else if (fmt[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (1);
}
