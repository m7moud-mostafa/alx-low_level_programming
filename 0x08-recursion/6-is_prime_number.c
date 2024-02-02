#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n > 1 && n <= 3)
		return (1);
	else if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}


/**
 * check_prime - checks if a number is prime recursively
 * @n: the number to check
 * @i: the current divisor to check
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i == n / 2)
		return (1);

	else
		return (check_prime(n, i + 1));
}
