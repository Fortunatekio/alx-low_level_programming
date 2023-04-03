#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  function that prints the chessboard
 * @a: is an array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			putchar(a[b][c]);
		putchar('\n');
	}
}
