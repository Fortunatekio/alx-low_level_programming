#include <stdio.h>
#include "main.h"
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
	char *qqq;
	unsigned int p, m;

	p = 0;
	m = 1;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[m])
	{
		m++;
	}
		qqq = malloc(sizeof(char) * (p + 1));
	if (qqq == NULL)
	{
		return (NULL);
	}
	while (p < m)
	{
		qqq[p] = str[p];
		p++;
	}
	qqq[p] = '\0';
	return (qqq);
}
