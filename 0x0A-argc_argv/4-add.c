#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;

		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");

			return (1);
		}

		sum += (int)num;
	}

	printf("%d\n", sum);

	return (0);
}
