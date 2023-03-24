#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 *@n: the number to print the largest prime factor from
 * Returns: Always 0 (success)
 */
int main(int n, i)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
