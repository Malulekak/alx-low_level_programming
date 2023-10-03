#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - Free memory for the array of pointers
 * @grid: matrix being passed
 * @height: variable to be used
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)

		free(grid[i]);

	free(grid);
}
