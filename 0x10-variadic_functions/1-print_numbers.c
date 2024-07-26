#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_number - Helper function to print a number using _putchar.
 * @num: The number to print.
 */
void print_number(int num)
{
	int temp, digits;
	char str[12]; /* Enough space for all integers (including negatives) */

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
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	const char *sep;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			sep = separator; /* Move declaration outside the for loop */
			while (*sep != '\0')
			{
				_putchar(*sep++);
			}
		}

		num = va_arg(args, int);
		print_number(num);
	}

	_putchar('\n');
	va_end(args);
}

