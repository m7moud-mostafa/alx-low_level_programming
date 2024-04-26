#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set -  A function that adds an element to the hash table
 *
 * @ht: pointer to a hash table
 * @key: the key
 * @value: the value
 * Return: returns 1 when success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *idx_node;
	unsigned long int  key_idx;

	if (!ht || !key || !value || !(*key))
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);

	/*Searches for the key and adds its value to the it*/
	idx_node = ht->array[key_idx];
	while (idx_node)
	{
		if (!strcmp(idx_node->key, key))
		{
			free(idx_node->value);
			idx_node->value = strdup(value);
			return (1);
		}
		idx_node = idx_node->next;
	}

	/*If the key is not found in the hash table*/

	/*Create the new_node in some place in memory*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[key_idx] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[key_idx];

	/*Add the node to its index*/
	ht->array[key_idx] = new_node;

	return (1);
}
