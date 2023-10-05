#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 *
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int i;

	int *array;

	if (min > max)
		return (NULL);

	array = (int *)malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
