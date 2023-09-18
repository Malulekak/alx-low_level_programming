#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while
		((*dest++ = *src++) != '\0');
	return (dest_ptr);
}
