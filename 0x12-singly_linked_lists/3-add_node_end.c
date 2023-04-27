#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: string
 * str needs to be duplicated
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	l = malloc(sizeof(list_t));
	if (!l)
		return (NULL);
	l->str = strdup(str);
	l->len = len;
	l->next = NULL;

	if (*head == NULL)
	{
		*head = l;
		return (l);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = l;

	return (l);
}
