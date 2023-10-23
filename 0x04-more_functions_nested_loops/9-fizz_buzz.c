#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100.
 * Multiples of three print “Fizz” instead of the number,
 * and multiples of five print “Buzz”. For numbers which
 * are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else
		{
			printf("%u\t", i);
		}
	}

	return (0);
}
