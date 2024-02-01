#include "lists.h"
#include <string.h>

/**
 * add_node - This function adds node to a list
 *
 * @head:a pointer to last element in the list
 * @str: string
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *n;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;


	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = *head;
	*head = n;

	return (*head);

}
