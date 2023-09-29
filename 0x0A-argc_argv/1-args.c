#include "main.h"
#include<stdio.h>

/**
  * main - prints the number of arguments passed into it.
  * @argc: the number of arguments.
  * @argv: the array of arguments.
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
