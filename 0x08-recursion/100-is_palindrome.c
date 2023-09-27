#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if string is a palindrome,
 * 0 if it is not.
 *
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	int start = 0;

	int end = len - 1;

	while (start < end)
	{
		if (s[start] != s[end])
			return (0);

		start++;

		end--;
	}

	return (1);
}
