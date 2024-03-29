
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *ptr;

	if (!head)
		return (NULL);

	ptr = *head;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
	}

	h = malloc(sizeof(dlistint_t));
	if (!h)
		return (NULL);

	h->n = n;
	h->next = NULL;
	h->prev = ptr;
	if (ptr)
		ptr->next = h;

	if (*head = NULL)
		*head = h;
	return (h);
}
