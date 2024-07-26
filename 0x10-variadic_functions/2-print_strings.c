#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		for (; *str != '\0'; str++)
			_putchar(*str);
		if (i < n - 1 && separator != NULL)
			for (; *separator != '\0'; separator++)
				_putchar(*separator);
	}
	_putchar('\n');
	va_end(args);
}

