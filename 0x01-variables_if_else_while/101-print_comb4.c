#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints letters from a to z using the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreddigit;
	int tendigit;
	int lastdigit;

	hundreddigit = 0;

	while (hundreddigit < 10)
	{
		tendigit = hundreddigit + 1;

		while (tendigit < 10)
		{
			lastdigit = tendigit + 1;

			while (lastdigit < 10)
			{
				putchar(hundreddigit + '0');
				putchar(tendigit + '0');
				putchar(lastdigit + '0');

				if (hundreddigit != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
				lastdigit++;
			}
			tendigit++;
		}
		hundreddigit++;
	}
	return (0);
}
