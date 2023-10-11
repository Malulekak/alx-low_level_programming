#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point
 * @argc: the number of parameters.
 * @argv: the parameeters in the case the number ob bytes.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int m, n;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < n; m++)
	{
		printf("%02hhx", *((char *)main + m));
		if (m < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
