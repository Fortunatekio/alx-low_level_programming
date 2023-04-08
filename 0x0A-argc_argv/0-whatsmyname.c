#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: the total number of arguments passed through the command line
 * @argv: an array of character pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
