#include "main.h"

/**
 * print_numbers - print 0-9
 * followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	char x;

	for (x = 48; x <= 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
