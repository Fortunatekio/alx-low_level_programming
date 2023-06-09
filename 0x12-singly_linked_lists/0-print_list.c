#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to list_t
 * you are allowed to use prinf
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)/n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		f++;
	}
	return (f);
}
