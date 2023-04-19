#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-cal.h"

/**
 * main - results of simple operations
 * int_attribute - tels gcc that subsequent calls to function main
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */
int main(int_attribute_((_unused_))argc, char *argv[])
{
	int num 1, num 2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num 1 = atoi(argv[1]);
	op = argv[2];
	num 2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num 2 == 0) || (*op == '%' && num 2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num 1, num 2));
	return (0);
}
