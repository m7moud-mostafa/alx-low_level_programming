#include "lists.h"
#include <string.h>

/**
 * add_node_end - This function adds a node to a the end of the list
 *
 * @head:a pointer to last element in the list
 * @str: string
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	int i;
	list_t *n;
	list_t *ptr;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;
	else
	{
		ptr = *head;
		for (i = 0; ptr->next != NULL; i++)
			ptr = ptr->next;

		ptr->next = n;
	}


	return (n);

}
