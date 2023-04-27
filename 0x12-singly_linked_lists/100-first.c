#include <stdio.h>

/**
 * first - prints a sentence before the main function is executed
 *
 * Description: function that executes automatically before main and
 * prints the message to the console
 */
void first(void)__attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
