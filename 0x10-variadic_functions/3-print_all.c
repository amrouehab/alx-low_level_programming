#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(args, int));
				break;
			case 'i':
				print_number(va_arg(args, int));
				break;
			case 'f':
				print_float(va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				while (*str)
					_putchar(*str++);
				break;
		}
		i++;
	}

	_putchar('\n');
	va_end(args);
}

/**
 * print_number - Helper function to print an integer using _putchar.
 * @num: The integer to print.
 */
void print_number(int num)
{
	int temp, digits;
	char str[12]; /* Enough space for all int (including negatives) */

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	temp = num;
	digits = 0;

	while (temp > 0)
	{
		digits++;
		temp /= 10;
	}

	str[digits] = '\0';

	while (digits > 0)
	{
		str[--digits] = (num % 10) + '0';
		num /= 10;
	}

	for (temp = 0; str[temp] != '\0'; temp++)
		_putchar(str[temp]);
}

/**
 * print_float - Helper function to print a float using _putchar.
 * @num: The float to print.
 */
void print_float(double num)
{
	int int_part, frac_part;
	int frac_digits = 6;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	int_part = (int)num;
	frac_part = (int)((num - int_part) * 1000000); /* Limiting to 6 decimal */

	print_number(int_part);
	_putchar('.');

	while (frac_digits--)
	{
		_putchar((frac_part / 100000) % 10 + '0');
		frac_part %= 100000;
		frac_part *= 10;
	}
}

