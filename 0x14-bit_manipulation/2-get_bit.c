
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search in
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (n && index > 0)
	{
		n >>= 1;
		index--;
	}

	if (n && index)
		return (-1);

	return (n & 1);

}
