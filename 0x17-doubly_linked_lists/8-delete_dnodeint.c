#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of
 *							  a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	to_delete = current;
	if (to_delete->next != NULL)
		to_delete->next->prev = to_delete->prev;

	if (to_delete->prev != NULL)
		to_delete->prev->next = to_delete->next;

	free(to_delete);
	return (1);
}
