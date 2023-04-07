#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * program should print a number, followed by a new line
 * @argc: total number of arguments
 * @argv: an array of character pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
