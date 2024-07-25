#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters
 * @size: Size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			if (column <= size - row)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
