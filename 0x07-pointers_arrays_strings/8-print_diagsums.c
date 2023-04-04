#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: input value
 * @size: input value
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int e, f, sum1 = 0, sum2 = 0;

	for (e = 0; e <= (size * size); e = e + size + 1)
		sum1 = sum1 + a[e];

	for (f = size - 1; f <= (size * size) - size; f = f + size - 1)
		sum2 = sum2 + a[f];
	printf("%d, %d\n", sum1, sum2);
}
