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
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
	{
		free(hash);
		return (NULL);
	}

	/*Initialize The array of arrays with NULL*/
	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash->size = size;
	hash->array = array;

	return (hash);
}
