#include "main.h"
#include <stdio.h>
#include <ctype.h>


/**
 * leet - encodes a string into 1337
 * @str: input string.
 *
 * Return: the pointer to dest.
 */

char *leet(char *str)
{
	int i;

	char *ptr = str;

	char *leet_chars = "aAeEoOtTlL";

	char *leet_replacements = "44330771";

	for (; *ptr != '\0'; ptr++)
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];

				break;
			}
		}
	}

	return (str);
}
