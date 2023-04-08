#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * assume that numbers and the addition of all the
 *
 * numbers can be stored in an int
 * @argc: the total number of arguments
 * @argv: an array of character pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;
	unsigned int j, sum = 0;
	char *f;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			f = argv[k];
			for (j = 0; j < strlen(f); j++)
			{
				if (f[j] < 48 || f[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(f);
			f++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
