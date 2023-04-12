#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1
 * followed by the contents of s2
 * @s1: input one
 * @s2: input two
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int f = 0, q = 0, r = 0, t = 0;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[f])
		f++;
	while (s2[q])
		q++;
	t = f + q;
	s = malloc((sizeof(char) * t) + 1);
	if (s == NULL)
		return (NULL);
	q = 0;
	while (r < t)
	{
		if (r <= f)
			s[r] = s1[r];
	if (r >= f)
	{
		s[r] = s2[q];
	q++;
	}
	r++;
	}
	s[r] = '\0';
	return (s);
}
