#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * This function can print lists with a loop
 * You should go through the list only once
 * @head: a pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *top = head, *down = head;
	size_t num = 0;

	while (top && down && top->next)
	{
		printf("[%p] %d\n", (void *)top, top->n);
		top = top->next;
		down = down->next->next;
		num++;

		if (top == down)
		{
			printf("[%p] %d\n", (void *)top, top->n);
			top = top->next;
			num++;
		}
		while (top != down)
		{
			printf("[%p] %d\n", (void *)top, top->n);
			top = top->next;
			num++;
		}
		printf("-> [%p] %d\n", (void *)top, top->n);
		break;
	}
	while (top)
	{
		printf("[%p] %d\n", (void *)top, top->n);
		top = top->next;
		num++;
	}
	return (num);
}
