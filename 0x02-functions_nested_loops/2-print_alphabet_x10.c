#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets 10 times in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
