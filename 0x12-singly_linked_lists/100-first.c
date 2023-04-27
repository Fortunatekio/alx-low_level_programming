#include <stdio.h>

void first(void)__attribute__((constructor))
/**
 * first - prints a sentence before the main
 * first - function prototype before its definitin
 * __attribute__ - executes the same function as startup of the program
 * first - function that executes automatically before main
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
