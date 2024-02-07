#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in the list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the node to be deleted, starting at 0.
 * Return: 1 if the deletion was successful, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *ptr;
	listint_t *next_ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
			ptr = ptr->next;


		if (ptr == NULL)
			return (-1);


		next_ptr = ptr->next;
		ptr->next = next_ptr->next;
		free(next_ptr);
	}
	else
	{
		next_ptr = *head;
		*head = next_ptr->next;
		free(next_ptr);
	}
	return (1);
}
