#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lens = 0;
	unsigned int lena = 0;
	unsigned int n = 0;
	unsigned int i = 0;
	unsigned int j;

	while (s[lens] != '\0')
		lens++;

	while (accept[lena] != '\0')
		lena++;

	for (; i < lens && n == i; i++)
	{
		for (j = 0; j < lena; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
