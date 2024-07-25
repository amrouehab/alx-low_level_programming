#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with a call to malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated space.
 *         If new_size == old_size, return ptr.
 *         If new_size == 0 and ptr is not NULL, return NULL.
 *         If ptr is NULL, call is equivalent to malloc(new_size).
 *         If malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, copy_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	copy_size = old_size < new_size ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}

