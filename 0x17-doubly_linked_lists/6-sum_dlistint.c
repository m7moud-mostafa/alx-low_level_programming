
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *				  of a dlistint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (!head)
		return (0);

	for (ptr = head; ptr; ptr = ptr->next)
		sum += ptr->n;

	return (sum);
}
