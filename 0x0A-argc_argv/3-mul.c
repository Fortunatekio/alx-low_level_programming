#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * program should print the result of the multiplication
 * @argc: total number of arguments
 * @argv: an array of character pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int h1 = 0, h2 = 0;

	if (argc == 3)
	{
		h1 = atoi(argv[1]);
		h2 = atoi(argv[2]);
		printf("%d\n", h1 * h2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
