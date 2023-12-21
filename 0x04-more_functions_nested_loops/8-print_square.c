#include "main.h"
/**
 * print_square - prints a squere n * n
 * @n : number of lines
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

