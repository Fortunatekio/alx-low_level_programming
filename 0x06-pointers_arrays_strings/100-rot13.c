#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @v: pointer
 *
 * Return: *v
 */
char *rot13(char *v)
{
	int b;
	int c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; v[b] != '\0'; b++)
	{
		for (c = 0; b < 52; b++)
		{
			if (v[b] == data1[c])
			{
				v[b] = datarot[c];
				break;
			}
		}
	}
	return (v);
}
