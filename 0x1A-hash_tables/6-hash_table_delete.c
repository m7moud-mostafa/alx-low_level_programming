#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_linked_list - frees linked list
 *
 * @head: pointer to linked list
 */
void free_linked_list(hash_node_t *head)
{
	hash_node_t *ptr;

	if (!head)
		return;

	while (head)
	{
		ptr = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = ptr;
	}
}



/**
 * hash_table_delete - deletes the hash table
 *
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_linked_list(ht->array[i]);

	}
	free(ht->array);
	free(ht);
}
