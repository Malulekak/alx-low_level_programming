#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments number
 * @av: argument variables
 *
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int i;

	char *concatenated;

	size_t pos = 0;

	size_t total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	concatenated = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(&concatenated[pos], av[i]);

		pos += strlen(av[i]);

		concatenated[pos++] = '\n';
	}

	concatenated[total_length] = '\0';

	return (concatenated);
}
