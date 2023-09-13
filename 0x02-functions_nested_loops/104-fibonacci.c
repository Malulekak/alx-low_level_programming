#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, sum;
	unsigned long fibonacci, fibonacci1, fibonacci2, fibonacci3;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);

		n1 = n2;
		n2 = sum;
	}

	fibonacci = n1 / 10000000000;
	fibonacci2 = n2 / 10000000000;
	fibonacci1 = n1 % 10000000000;
	fibonacci3 = n2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fibonacci + fibonacci2;
		half2 = fibonacci1 + fibonacci3;
		if (fibonacci1 + fibonacci3 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fibonacci = fibonacci2;
		fibonacci1 = fibonacci3;
		fibonacci2 = half1;
		fibonacci3 = half2;
	}
	printf("\n");
	return (0);
}
