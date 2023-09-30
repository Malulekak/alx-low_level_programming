#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - multiplies two numbers.
  * @argc: The number of command line arguments.
  * @argv: The array containing the arguments.
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);

	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}