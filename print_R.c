#include "main.h"

/**
 * print_R - prints rot13'ed string
 *
 * @value: va_list argument
 *
 * Return: int
 */

int print_R(va_list value)
{
	int i;
	int counter = 0;
	int k;
	int j;
	char *str;
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	str = va_arg(value, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
