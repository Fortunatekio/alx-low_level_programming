#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * string_nconcat - combines two strings to form a single string
 * The returned pointer shall point to a newly allocated space in memory
 * @s1: string to be appended
 * @s2: string to concatenate from
 * @n: number of bytes
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f = 0, q = 0, r = 0, t = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[f])
		f++;
	while (s2[r])
		r++;
	if (n >= r)
		t = f + r;
	else
		t = f + n;
	ptr = malloc(sizeof(char) * t + 1);
	if (ptr == NULL)
		return (NULL);
	r = 0;
	while (q < t)
	{
		if (q <= f)
			ptr[q] = s1[q];
		if (q >= f)
		{
			ptr[q] = s2[r];
			r++;
		}
		q++;
	}
	ptr[q] = '\0';
	return (ptr);
}
