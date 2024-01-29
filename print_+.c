#include <main.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * my_printf - custom printf function that handles the "+" flag character
 * @format: const char pointer to the format string
 * Return: void
 */
void my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '+')
		{
			putchar('+');
			i += 2;
		}
		else
		{
			putchar(format[i]);
			i++;
		}
	}
	va_end(args);
}

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	int num = 10;

	my_printf("The number is %+d\n", num);

	return (0);
}

