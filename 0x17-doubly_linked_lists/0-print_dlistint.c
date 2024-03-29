
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i;

	if (!h)
		return (0);

	ptr = h;
	for (i = 0; ptr; i++)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
