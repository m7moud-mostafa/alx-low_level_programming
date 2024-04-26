#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with key
 *
 * @ht: hash table
 * @key: the key its value to br retrieves
 * Return: value contained with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key || !(*key))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	node = ht->array[idx];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
