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
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
