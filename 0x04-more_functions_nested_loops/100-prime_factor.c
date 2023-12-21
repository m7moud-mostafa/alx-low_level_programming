#include <stdio.h>

/**
 * main - prints largest prime number
 *
 * Return: 0
 */

int main(void)
{
	long n;
	long largest_prime;
	long i;

	n = 612852475143;
	largest_prime = n;
	i = 2;
	while (i <= largest_prime / 2)
	{
		if (largest_prime % i == 0)
		{
			largest_prime = largest_prime / i;
			/* printf("largest prime = %ld , i = %ld\n",largest_prime , i);*/
			i = 2;
		}
		else
			i++;
	}
	printf("%ld\n", largest_prime);
	return (0);
}

