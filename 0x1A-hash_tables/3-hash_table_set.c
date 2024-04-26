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
	hash_node_t *node;
	unsigned long int  key_idx;

	if (!ht || !key || !value || !(*key))
		return (0);

	key_idx = key_index(key, ht->size);

	/*Create the node in some place in memory*/
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[key_idx] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[key_idx];

	/*Add the node to its index*/
	ht->array[key_idx] = node;

	return (1);
}
