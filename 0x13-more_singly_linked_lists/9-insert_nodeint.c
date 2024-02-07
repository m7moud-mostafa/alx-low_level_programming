#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given
 *							 position in the list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted, starting at 0.
 * @n: Integer value to be added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *ptr;
	listint_t *next_ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = *head;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	next_ptr = ptr->next;
	ptr->next = tmp;
	tmp->next = next_ptr;

	return (tmp);
}
