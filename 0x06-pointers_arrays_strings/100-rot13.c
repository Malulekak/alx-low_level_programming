#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{
			*ptr += 13;
		}
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
		{
			*ptr -= 13;
		}

		ptr++;
	}

	return (s);
}

