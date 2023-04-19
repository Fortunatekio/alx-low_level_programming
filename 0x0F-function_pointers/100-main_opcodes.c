#include <stdio.h>
#include <stdlib.h>

/**
 * main - opcodes
 * @argc: arguments number
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, f;
	unsigned char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (unsigned char *)main;

	for (f = 0; f < bytes; f++)
	{
		if (f == bytes - 1)
		{
			printf("%02x\n", arr[f]);
			break;
		}
		printf("%02x", arr[f]);
	}
	return (0);
}
