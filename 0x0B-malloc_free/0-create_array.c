#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of memory blocks
 * @c: character that is to be assigned
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int f;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (f = 0; f < size; f++)
		ptr[f] = c;
	return (ptr);
}
