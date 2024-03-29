
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *ptr;

	h = *head;
	if (!head)
		return (NULL);

	ptr = h;
	h = malloc(sizeof(dlistint_t));
	if (!h)
		return (NULL);

	h->n = n;
	h->next = ptr;
	h->prev = NULL;
	if (ptr)
		ptr->prev = h;
	*head = h;
	return (h);
}
