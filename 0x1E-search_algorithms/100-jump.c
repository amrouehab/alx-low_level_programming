#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t block = step;

    if (array == NULL)
        return (-1);

    while (block < size && array[block] < value) {
        printf("Value checked array[%lu] = [%d]\n", block, array[block]);
        prev = block;
        block += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, block);

    for (size_t i = prev; i < size && i <= block; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

