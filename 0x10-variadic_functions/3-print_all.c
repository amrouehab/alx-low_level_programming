#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - Prints anything based on the format.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, format);
	i = 0;

	while (format && format[i] != '\0')
	{
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		switch (format[i])
		{
		case 'c':
			print_char(va_arg(args, int));
			break;
		case 'i':
			print_integer(va_arg(args, int));
			break;
		case 'f':
			print_float(va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			print_string(str);
			break;
		}

		i++;
	}

	_putchar('\n');
	va_end(args);
}

/**
 * print_char - Prints a character using _putchar.
 * @c: The character to print.
 */
void print_char(char c)
{
	_putchar(c);
}

/**
 * print_integer - Prints an integer using _putchar.
 * @num: The integer to print.
 */
void print_integer(int num)
{
	int temp, digits;
	char str[12];

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

	while (num > 0)
	{
		str[--digits] = (num % 10) + '0';
		num /= 10;
	}

	for (temp = 0; str[temp] != '\0'; temp++)
	{
		_putchar(str[temp]);
	}
}

/**
 * print_string - Prints a string using _putchar.
 * @str: The string to print.
 */
void print_string(char *str)
{
	if (str == NULL)
	{
		str = "(nil)";
	}

	while (*str)
	{
		_putchar(*str++);
	}
}

/**
 * print_float - Prints a float using _putchar.
 * @num: The float to print.
 */
void print_float(double num)
{
	int int_part;
	double frac_part;
	int frac_digits;

	int_part = (int)num;
	frac_part = num - int_part;
	frac_digits = 6;

	if (num < 0)
	{
		_putchar('-');
		int_part = -int_part;
		frac_part = -frac_part;
	}

	print_integer(int_part);
	_putchar('.');

	while (frac_digits--)
	{
		frac_part *= 10;
		_putchar((int)frac_part % 10 + '0');
		frac_part -= (int)frac_part;
	}
}

