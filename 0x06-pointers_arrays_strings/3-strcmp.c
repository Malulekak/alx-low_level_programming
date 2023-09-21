#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings
* @s1: first string.
* @s2: second string.
*
* Return: 0 if s1 and s2 are equals,
* else return another number.
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}
