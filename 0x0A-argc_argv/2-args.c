#include <stdio.h>
#include "main.h"


/**
  * main - prints all arguments it receives.
  * @argc: The number of command line arguments.
  * @argv: The array containing the arguments.
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
