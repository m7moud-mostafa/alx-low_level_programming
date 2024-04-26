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
	hash_node_t **array;


	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
	{
		free(hash);
		return (NULL);
	}

	hash->size = size;
	hash->array = array;

	return (hash);
}
