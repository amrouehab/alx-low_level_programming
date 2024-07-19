#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - Checks if a string contains only digits.
 * @s: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);

	return (1);
}

/**
 * _puts - Prints a string to stdout.
 * @str: The string to print.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
}

/**
 * mul - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void mul(char *num1, char *num2)
{
	int len1, len2, i, j, carry, *result;

	for (len1 = 0; num1[len1]; len1++)
		;
	for (len2 = 0; num2[len2]; len2++)
		;

	result = malloc((len1 + len2) * sizeof(int));
	if (result == NULL)
		exit(98);

	for (i = 0; i < (len1 + len2); i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
			carry = result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < (len1 + len2) && result[i] == 0)
		i++;

	if (i == (len1 + len2))
		_putchar('0');
	else
		while (i < (len1 + len2))
			_putchar(result[i++] + '0');

	_putchar('\n');
	free(result);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	mul(argv[1], argv[2]);

	return (0);
}

