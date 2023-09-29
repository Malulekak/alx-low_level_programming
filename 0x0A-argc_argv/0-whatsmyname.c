#include "main.h"
#include <stdio.h>

/**
  * main - prints name, followed by a new line.
  * @argc: number of command line argument.
  * @argv: The array containing the command line argc
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
