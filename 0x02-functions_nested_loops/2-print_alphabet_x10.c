#include "main.h"

/**
 * print_alphabet_x10 - void function that prints alphabet
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void  print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	}
}
