#include "main.h"

int _sqrt_recursion_helper(int n, int min, int max);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Square root of a negative number is not a natural number */
	}
	return (_sqrt_recursion_helper(n, 0, n));
}

/**
 * _sqrt_recursion_helper - helper function
 * @n: the number to find the square root of
 * @min: the lower bound of the range to search
 * @max: the upper bound of the range to search
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion_helper(int n, int min, int max)
{
	int guess;
	long squared;

	if (max < min)
	{
		return (-1); /* No natural square root found */
	}

	guess = (min + max) / 2;
	squared = (long)guess * guess; /* Prevent overflow */

	if (squared == n)
	{
		return (guess); /* Found the natural square root */
	}
	else if (squared < n)
	{
		return (_sqrt_recursion_helper(n, guess + 1, max)); /* Guess was too low */
	}
	else
	{
		return (_sqrt_recursion_helper(n, min, guess - 1)); /* Guess was too high */
	}
}
