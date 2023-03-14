#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int w, h;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	p = malloc(width * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < width; w++)
	{
		p[w] = calloc(height, sizeof(int));
		if (p[w] == NULL)
		{
			for (h = 0; h < height; h++)
			{
				free(p);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
