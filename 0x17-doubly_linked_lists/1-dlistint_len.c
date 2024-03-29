
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i;

	if (!h)
		return (0);

	ptr = h;
	for (i = 0; ptr; i++)
		ptr = ptr->next;

	return (i);
}
