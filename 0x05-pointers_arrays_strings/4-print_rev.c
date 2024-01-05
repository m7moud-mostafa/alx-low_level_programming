#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	n -= 1;

	for (n; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	
	_putchar('\n');
}
