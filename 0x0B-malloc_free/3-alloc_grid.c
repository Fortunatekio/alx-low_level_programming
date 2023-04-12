#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int f, q, r, t;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);
	z = malloc(sizeof(int *) * height);
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (f = 0; f < height; f++)
	{
		z[f] = malloc(sizeof(int) * width);
	if (z[f] == NULL)
	{
		for (q = f; q >= 0; q++)
		{
			free(z[q]);
		}
	free(z);
	return (NULL);
	}
	}
	for (r = 0; r < height; r++)
	{
		for (t = 0; t < width; t++)
			z[r][t] = 0;
	}
	return (z);
}
