#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (0);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
