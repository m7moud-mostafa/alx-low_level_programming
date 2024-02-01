#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h:the list to be printed
 * Return: return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *ptr;

	ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		if (ptr->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}

	return (i);
}
