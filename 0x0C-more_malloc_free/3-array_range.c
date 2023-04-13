#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * @min: minimum of range values
 * @max: maximum of range values
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *b, f = 0;

	if (min > max)
		return (NULL);
	b = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[f] = min;
		f++;
		min++;
	}
	return (b);
}
