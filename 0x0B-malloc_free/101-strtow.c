#include <stdlib.h>
#include "main.h"

/**
 * count_words - estimates the number of words in strings
 * @z: the string
 * Return: the number of words
 */
int count_words(char *z)
{
	int red, v, y;

	red = 0;
	y = 0;

	for (v = 0; z[v] != '\0'; v++)

		if (z[v] == ' ')
		{
			red = 0;
		}
			else if (red == 0)
		{
			red = 1;
			y++;
		}
	return (y);
}
/**
 * strtow - function that splits a string into words
 * @str: the string
 * Return: pointer to an array of strings or Null
 */
char **strtow(char *str)
{
	char **blue, *green;
	int f, r = 0, p = 0, words, v = 0, a, z;

	while (*(str + p))
		p++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	blue = (char **)malloc(sizeof(char *) * (words + 1));
	if (blue == NULL)
		return (NULL);
	for (f = 0; f < p; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (v)
			{
				z = f;
				green = (char *)malloc(sizeof(char) * (v + 1));
				if (green == NULL)
					return (NULL);
				while (a < z)
					*green++ = str[a++];
				*green = '\0';
				blue[r] = green - v;
				r++;
				v = 0;
			}
		}
		else if (v++ == 0)
			a = f;
	}
	blue[r] = NULL;
	return (blue);
}
