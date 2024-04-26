#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints tha hash table
 *
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char is_comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (is_comma)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next)
					printf(", ");
				node = node->next;
			}
			is_comma = 1;
		}
	}
	printf("}\n");
}
