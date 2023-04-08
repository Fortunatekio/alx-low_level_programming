#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * cents is the amount of cents you need to give back
 * use atoi to parse the parameter passed to your program
 * @argc: total number of arguments passed through the command line
 * @argv: an array of character pointers
 * Return: 1 if the number of arguments passed is not exactly 1 if negative 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
