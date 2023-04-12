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
	int **one;
	int a, b;

	one == NULL;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	one = malloc(sizeof(int *) * height);
	}
	if (one == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		one[a] = malloc(sizeof(int) * width);
	}
	if (one[a] == NULL)
	{
		for (; a >= 0; a--)
			free(one[a]);
	free(one);
	return (NULL);
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			one[a][b] = 0;
	}
	return (one);
}
