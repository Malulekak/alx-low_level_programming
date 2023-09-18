#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
