#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	hash_node_t *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
	{
		free(array);
		return (NULL);
	}
	hash->size = size;
	hash->array = &array;

	return (hash);
}
