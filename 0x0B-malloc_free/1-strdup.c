#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string into newly allocated array.
 * @str: string to duplicate.
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int length = 0;

	char *newStr;

	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	newStr = malloc((length + 1) * sizeof(char));

	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		newStr[i] = str[i];
	}

	newStr[length] = '\0';

	return (newStr);
}
