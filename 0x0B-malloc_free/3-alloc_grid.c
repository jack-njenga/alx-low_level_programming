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
	p = malloc((width * height) * sizeof(int));
	for (w = 0; w < width; w++)
	{
		p[w] = malloc(sizeof(int) * height);
		for (h = 0; h < height; h++)
		{
			p[w][h] = 0;
		}
	}
	return (p);
}
