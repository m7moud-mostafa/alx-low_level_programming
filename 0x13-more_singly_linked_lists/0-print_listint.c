#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	for (i = 0; ptr != NULL; i++)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
