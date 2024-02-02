#include "lists.h"
/**
 * free_list - A function that frees a list_t list.
 *
 * @head: a pointer to the list
 */
void free_list(list_t *head)
{
	list_t *ptr;
	int i;

	if (head == NULL)
		return;

	for (i = 0; head != NULL; i++)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);

	}
}
