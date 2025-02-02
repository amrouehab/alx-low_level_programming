#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - Helper function for binary search
 * @array: Pointer to the first element of the array
 * @low: Lower bound of the subarray
 * @high: Upper bound of the subarray
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    while (low <= high) {
        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++) {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

        mid = (low + high) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value using Exponential search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value) {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    size_t low = bound / 2;
    size_t high = (bound < size) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);
    return (binary_search_helper(array, low, high, value));
}

