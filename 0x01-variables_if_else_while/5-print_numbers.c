#include <stdio.h>

/**
 * main - prints all single digits numbers of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
