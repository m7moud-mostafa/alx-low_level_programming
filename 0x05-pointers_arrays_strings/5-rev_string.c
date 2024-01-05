#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 */

void rev_string(char *s);
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	for (n -= 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
