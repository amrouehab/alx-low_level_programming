#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Description: Numbers are separated by comma and space,
 * and followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* Print each element */
		_putchar(a[i] + '0');/* Adding '0' converts int to char */
		/* Add comma and space if not last element */
		if (i != n - 1)
		{
			_putchar(','); /* Print comma */
			_putchar(' '); /* Print space */
		}
	}
	_putchar('\n'); /* Print new line */
}
