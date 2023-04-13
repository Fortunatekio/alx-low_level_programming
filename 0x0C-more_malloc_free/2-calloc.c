#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * _calloc function allocates memory for an array of nmemb
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int f = 0, t = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = nmemb * size;
	s = malloc(t);
	if (s == NULL)
		return (NULL);
	while (f < t)
	{
		s[f] = 0;
		f++;
	}
	return (s);
}
