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
	int tendigit;
	int lastdigit;

	tendigit = 0;

	while (tendigit < 10)
	{
		lastdigit = tendigit + 1;

		while (lastdigit < 10)
		{
			putchar(tendigit + '0');
			putchar(lastdigit + '0');

			if (tendigit != 8)
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
	return (0);
}
