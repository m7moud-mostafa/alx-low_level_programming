#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int n = _strlen(s);

	for (n; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
