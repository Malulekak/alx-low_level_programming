#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 *
 * Return: return pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;

	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
