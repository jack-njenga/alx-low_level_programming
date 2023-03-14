#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees previously allocated memory
 * @grid: pointer to 2-D array
 * @height: height of 2-D array
 *
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
