#include "main.h"
#include <string.h>

int checkpalindrome(char *s);
/**
 * checkpalindrome - returns the length of a string
 * @s: the string
 * Return: length of a string
 */
int checkpalindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + checkpalindrome(s + 1));
	}
}
/**
 * comparator - compares each string
 * @s: the string
 * @m2: biggest iterator
 * @m1: smallest iterator
 * Return: 0
 */
int comparator(char *s, int m1, int m2)
{
	if (*(s + m1) == *(s + m2))
	{
		if (m1 == m2 || m1 == m2 + 1)
			return (1);
		return (0 + comparator(s, m1 + 1, m2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * An empty string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, checkpalindrome(s) - 1));
}
