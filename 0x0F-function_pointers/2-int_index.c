#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used for comparison
 *
 * Return: index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
    {
        return (-1);
    }

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
        {
            return (i);
        }
    }

    return (-1);
}

