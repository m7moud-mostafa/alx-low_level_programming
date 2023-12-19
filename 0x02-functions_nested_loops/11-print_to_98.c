#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 */
void print_to_98(int n)
{
	while (1)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("\n");
}

