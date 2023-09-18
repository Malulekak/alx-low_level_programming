#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int length = strlen(str);

	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	puts(str + start_index);
}
