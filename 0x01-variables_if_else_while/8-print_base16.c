#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
		putchar((n % 15) + '0');
	putchar('\n');

	return (0);
}
