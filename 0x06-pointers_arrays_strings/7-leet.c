#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @m: input value
 *
 * Return: m value
 */
char *leet(char *m)
{
	int o, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (o = 0; m[o] != '\0'; o++)
	{
		for (p = 0; p < 10; p++)
		{
			if (m[o] == s1[p])
			{
				m[o] = s2[p];
			}
		}
	}
	return (m);
}
