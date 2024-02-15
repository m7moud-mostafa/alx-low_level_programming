#include "main.h"

/**
 * power - calculates base ^ exponent
 *
 * @base: the base
 * @exponent: the exponent
 * Return: int
 */
int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result *= base;
		--exponent;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is
 * one or more chars in the string b that is not
 * 0 or 1 b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		num <<= 1;
		switch (*b)
		{
		case '1':
			num++;
			break;
		case '0':
			break;
		default:
			return (0);
			break;
		}
		b++;
	}
	return (num);
}
