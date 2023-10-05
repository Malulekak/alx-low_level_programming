#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_valid_number - checks if a string contains a non-digit char
 * @num: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */


int is_valid_number(const char *num)
{
	while (*num)
	{
		if (*num < '0' || *num > '9')
			return (0);

		num++;
	}

	return (1);
}

/**
 * multiply - multiplies two positive numbers.
 * @num1: string to evaluate
 * @num2: string to evaluate
 *
 * Return: the length of the string
 */


void multiply(char *num1, char *num2)
{
	int *result;

	int i;

	int j;

	int start = 0;

	int len1 = strlen(num1);

	int len2 = strlen(num2);

	result = (int *)malloc(sizeof(int) * (len1 + len2));

	if (result == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");

		exit(1);
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');

			int sum = mul + result[i + j + 1];

			result[i + j + 1] = sum % 10;

			result[i + j] += sum / 10;
		}
	}

	while (start < len1 + len2 && result[start] == 0)

		start++;

	for (i = start; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	char *num1;

	char *num2;

	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		fprintf(stderr, "Error\n");

		return (98);
	}

	num1 = argv[1];

	num2 = argv[2];

	multiply(num1, num2);

	return (0);
}
