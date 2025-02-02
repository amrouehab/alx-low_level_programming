#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 * Return: Pointer to the first node where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev = list;

    if (!list)
        return (NULL);

    while (list->express)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->express->index, list->express->n);
        if (list->express->n >= value)
            break;

        prev = list->express;
        list = list->express;
    }

    if (!list->express)
    {
        while (list->next)
            list = list->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, list->index);

    for (; prev && prev->index <= list->index; prev = prev->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
    }

    return (NULL);
}

