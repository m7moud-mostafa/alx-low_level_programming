#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the string
 * b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
	return (0);

	while (*b)
	{
	num <<= 1;
	if (*b != '0' && *b != '1')
		return (0);
	if (*b == '1')
		num += 1;
	b++;
	}
	return (num);
}
