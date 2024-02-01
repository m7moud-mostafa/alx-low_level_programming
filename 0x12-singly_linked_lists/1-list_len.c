#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that calculates the length of a list.
 *
 * @h:the list
 * Return: return the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *ptr;

	ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	return (i);
}
