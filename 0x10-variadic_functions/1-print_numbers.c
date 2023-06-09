#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string
 * @n: number of integers
 * @...: variable number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int f;

	va_start(nums, n);

	for (f = 0; f < n; f++)
	{
		printf("%d", va_arg(nums, int));
		if (f < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nums);
}
