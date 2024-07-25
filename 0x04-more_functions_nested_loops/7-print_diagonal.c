#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
