#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the list
 * @value: Value to search for
 * Return: Pointer to the node where the value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size), prev_index = 0;
    listint_t *prev = list, *current = list;

    if (!list)
        return (NULL);

    while (current->next && current->index < size && current->n < value)
    {
        prev = current;
        for (size_t i = 0; i < step && current->next; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    for (; prev && prev->index <= current->index; prev = prev->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
    }

    return (NULL);
}

