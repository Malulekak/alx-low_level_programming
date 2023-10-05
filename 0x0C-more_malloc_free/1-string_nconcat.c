#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 *
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;

	unsigned int s2_len;

	unsigned int total_len;

	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);

	s2_len = strlen(s2);

	total_len = s1_len + ((n >= s2_len) ? s2_len : n);

	concatenated = (char *)malloc(total_len + 1);

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);

	strncat(concatenated, s2, (n >= s2_len) ? s2_len : n);

	return (concatenated);
}
