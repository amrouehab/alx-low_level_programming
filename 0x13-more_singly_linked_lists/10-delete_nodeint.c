#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	if (!temp || !(temp->next))
		return (-1);

	prev = temp->next;
	temp->next = prev->next;
	free(prev);

	return (1);
}
