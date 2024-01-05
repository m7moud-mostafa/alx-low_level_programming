#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 */

void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length) / 2;

	for (; n < length; n++)
		_putchar(str[n]);
	_putchar('\n');

}
