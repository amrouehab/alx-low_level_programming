#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the current array being searched
 * @array: Pointer to the first element of the array
 * @left: Starting index of the array segment
 * @right: Ending index of the array segment
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * recursive_binary_search - Recursive binary search to find the first occurrence
 * @array: Pointer to the first element of the array
 * @left: Starting index of the search range
 * @right: Ending index of the search range
 * @value: Value to search for
 * Return: The index of the value or -1 if not found
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
    if (left > right)
        return (-1);

    print_array(array, left, right);

    size_t mid = left + (right - left) / 2;

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return ((int)mid);
        return recursive_binary_search(array, left, mid - 1, value);
    }
    else if (array[mid] > value)
    {
        return recursive_binary_search(array, left, mid - 1, value);
    }
    else
    {
        return recursive_binary_search(array, mid + 1, right, value);
    }
}

/**
 * advanced_binary - Initiates the advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index of the value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return recursive_binary_search(array, 0, size - 1, value);
}

