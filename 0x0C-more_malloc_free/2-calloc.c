#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         The memory is set to zero.
 *         If nmemb or size is 0, it returns NULL.
 *         If malloc fails, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}

