#include "main.h"

int actual_sqrt_recursion(int n, int q);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: the number to calculate square root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find
 * the natural square root of a number
 * @n: the number to calculate the square root
 * @q: iterate number
 *
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int q)
{
	if (q * q > n)
	{
		return (-1);
	}
	if (q * q == n)
	{
		return (q);
	}
	return (actual_sqrt_recursion(n, q + 1));
}
