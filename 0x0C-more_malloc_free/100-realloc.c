#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space
 * @ptr: pointer to the memory
 * @old_size: size
 * @new_size: new size of the new memory
 * Return: pointer to the memory previously allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int f;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (f = 0; f < old_size && f < new_size; f++)
	{
		s[f] = ((char *)ptr)[f];
	}
	free(ptr);
	return (s);
}
