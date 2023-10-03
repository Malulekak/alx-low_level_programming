#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
	size_t length;

	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = strlen(s1) + strlen(s2) + 1;

	concatenated = (char *)malloc(length * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);

	strcat(concatenated, s2);

	return (concatenated);
}
