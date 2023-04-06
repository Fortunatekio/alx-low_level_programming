#include "main.h"
#include <stdio.h>

int isprime(int n, int q);
/**
 * is_prime_number -  function that returns 1 if the input
 *  integer is a prime number
 *  @n: the number
 *
 *  Return: integer
 */
int is_prime_number(int n)
{
	return (isprime(n, 1));
}
/**
 * isprime - checks to see if the number is prime
 * @n: number to be checked
 * @q: number of iteration
 * Return: 1 for prime or 0 for not prime
 */
int isprime(int n, int q)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % q == 0 && q > 1)
	{
		return (0);
	}
	if ((n / q) < q)
	{
		return (1);
	}
	return (isprime(n, q + 1));
}
