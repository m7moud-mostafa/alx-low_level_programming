
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped;
	unsigned int i = 0;

	flipped = m ^ n;

	while (flipped)
	{
		i += flipped & 1;
		flipped >>= 1;
	}
	return (i);
}
