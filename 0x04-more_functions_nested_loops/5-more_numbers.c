#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0-14
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
