#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: input
 * @av: double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int ab = 0, f = 0, q = 0, r = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (f < ac)
	{
		while (av[f][q])
		{
			ab++;
			q++;
		}
		q = 0;
		f++;
	}
	s = malloc((sizeof(char) * ab) + ac + 1);
	f = 0;
	while (av[f])
	{
		while (av[f][q])
		{
		s[r] = av[f][q];
		r++;
		q++;
	}
	s[r] = '\n';

	q = 0;
	r++;
	f++;
	}
	r++;
	s[r] = '\0';
	return (s);
}
