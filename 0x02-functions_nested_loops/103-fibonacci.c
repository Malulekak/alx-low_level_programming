#include <stdio.h>

/**
  * main - prints the sum of the even-valued terms
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;

	while (c + b < 4000000)
	{
		c += b;

		if (b % 2 == 0)
			sum += c;

		b = c - b;

		++a;
	}
	printf("\n");
	return (0);
}
