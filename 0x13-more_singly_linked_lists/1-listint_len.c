#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	for (i = 0; ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	return (i);
}
