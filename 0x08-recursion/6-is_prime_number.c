#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 *
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
