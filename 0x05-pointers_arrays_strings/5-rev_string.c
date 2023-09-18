#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	char c;
	int i;
	int length, len1;

	length = 0;
	len1 = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	len1 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[len1];
		s[len1--] = c;
	}
}
