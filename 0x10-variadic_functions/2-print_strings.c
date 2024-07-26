#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			const char *sep = separator;

			while (*sep != '\0')
			{
				_putchar(*sep);
				sep++;
			}
		}

		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}

	_putchar('\n');
	va_end(args);
}

