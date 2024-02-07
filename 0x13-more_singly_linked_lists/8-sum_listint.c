#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
}
