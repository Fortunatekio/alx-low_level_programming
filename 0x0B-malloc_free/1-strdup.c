#include <stdio.h>
#include <string.h>
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
	char *aa;
	unsigned int p, m;

	p = 0;
	m = 0;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[m])
	{
		m++;
		aa = malloc(sizeof(char) * (p + 1));
	}
	if (aa == NULL)
	{
		return (NULL);
	}
	while ((aa[p] = str[p]) != '\0')
	{
		p++;
	}
	return (aa);
}
