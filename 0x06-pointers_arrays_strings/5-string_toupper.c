#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @d: pointer
 *
 * Return: d
 */
char *string_toupper(char *d)
{
	int j;

	j = 0;
	while (d[j] != '\0')
	{
		if (d[j] >= 'a' && d[j] <= 'z')
			d[j] = d[j] - 32;
		j++;
	}
	return (d);
}
