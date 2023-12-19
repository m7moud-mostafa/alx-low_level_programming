#include "main.h"
#include <stdio.h>
/**
 * main - prints the n times table
 * Return: 0 always
 */
int main(void)
{
	int n;
	int sum_3;
	int sum_5;
	int sum;
	int i;

	n = 1024;
	sum_3 = 0;
	sum_5 = 0;

	for (i = 3; i < n; i += 3)
	{
		if (i % 5 != 0)
			sum_3 += i;
	}
	for (i = 5; i < n; i += 5)
	{
		sum_5 += i;
	}
	sum = sum_3 + sum_5;
	printf("%d\n", sum);
	return (0);
}
