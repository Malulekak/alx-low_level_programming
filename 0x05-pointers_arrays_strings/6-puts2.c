#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i;
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
