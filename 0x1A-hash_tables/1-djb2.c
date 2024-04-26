#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_djb2 - hash function
 *
 * @str: string to be hashed
 * Return: unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	c = *str;
	while (c)
	{
		hash = ((hash << 5) + hash) + c;
		str++;
		c = *str;
	}
	return (hash);
}
