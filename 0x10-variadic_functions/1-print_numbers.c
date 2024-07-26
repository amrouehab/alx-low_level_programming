#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_number - Helper function to print a number using _putchar.
 * @num: The number to print.
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		int temp = num;
		int digits = 0;

		while (temp > 0)
		{
			digits++;
			temp /= 10;
		}

		char str[digits];

		str[digits] = '\0';

		while (digits > 0)
		{
			str[--digits] = (num % 10) + '0';
			num /= 10;
		}

		for (char *p = str; *p != '\0'; p++)
			_putchar(*p);
	}
}

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			for (const char *sep = separator; *sep != '\0'; sep++)
			{
				_putchar(*sep);
			}
		}

		int num = va_arg(args, int);

		print_number(num);
	}

	_putchar('\n');
	va_end(args);
}

