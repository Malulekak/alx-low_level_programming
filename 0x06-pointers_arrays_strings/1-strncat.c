#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 *
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
        char *result = dest;

        while (*dest != '\0')

                dest++;

        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }

        *dest = '\0';

        return (result);
}
