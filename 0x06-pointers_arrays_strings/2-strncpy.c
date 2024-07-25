#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}

