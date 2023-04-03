#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the destination array
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes
 * Return: returns pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int p;
int q = n;

for (p = 0; p < q; p++)
{
	dest[p] = src[p];
	n--;
}
return (dest);
}
