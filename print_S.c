#include "main.h"

/**
 * print_S - prints char < 32 or > 126 in HEX
 *
 * @value: va_list argument
 *
 * Return: int n, length of printed value
 */

int print_S(va_list value)
{
	char *str;
	int i;
	int n = 0;
	int holder;

	str = va_arg(value, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			n = n + 2;
			holder = str[i];
			if (holder < 16)
			{
				_putchar('0');
				n++;
			}
			n = n + print_XS(holder);
		}
		else
		{
			_putchar(str[i]);
			n++;
		}
	}
	return (n);
}
