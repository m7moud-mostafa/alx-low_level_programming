#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: integer to determine the table limit
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			if (n > 0)
				printf(", ");
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				if (result < 10)
				{
					printf("  %d", result);
				}
				else if (result < 100)
				{
					printf(" %d", result);
				}
				else
				{
					printf("%d", result);
				}
				if (j < n)
					printf(", ");
			}
			printf("\n");
		}
	}
}

