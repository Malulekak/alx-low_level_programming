#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: The number of command line arguments.
  * @argv: The array containing the arguments.
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};

	int num_coins = sizeof(coins) / sizeof(coins[0]);

	int count = 0;

	int i;

	for (i = 0; i < num_coins; i++)
	{
		count += cents / coins[i];

		cents %= coins[i];
	}

	printf("%d\n", count);

	return (0);
}
