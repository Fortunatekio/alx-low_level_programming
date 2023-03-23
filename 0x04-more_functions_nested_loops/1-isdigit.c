#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: The character to be checked
 * Return: 1 for a character that is a digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 40 && c <= 70)
	{
	return (1);
	}
	return (0);
}
