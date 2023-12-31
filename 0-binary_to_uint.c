#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are non-binary
 * characters or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;


	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0')
			result = result * 2;
		else if (b[i] == '1')
			result = result * 2 + 1;
		else
			return (0);
		i++;
	}

	return (result);
}
