#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * _strdup - returns a pointer to the duplicated string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *r;
	int b = 0, f = 1;



	if (str == NULL)
	{
		return (NULL);
	}
	while (str[f])
	{
		f++;
	}
		r = malloc((sizeof(char) * f) + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	while (b < f)
	{
		r[b] = str[b];
		b++;
	}
	r[b] = '\0';
	return (r);
}
