#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to the string to be printed
 *
 * Description: If the number of characters is odd
 * it prints the last n characters
 * where n = (length_of_the_string - 1) / 2
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2 + 1);

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
