#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0-9
 * followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
