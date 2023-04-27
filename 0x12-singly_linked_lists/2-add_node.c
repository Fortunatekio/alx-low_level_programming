#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node -  function that adds a new node at the
 * beginning of a list_t list
 * @head: double pointer
 * @str: new string
 * str needs to be duplicated
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;
	unsigned int len = 0;

	while (str[len])
		len++;
	l = malloc(sizeof(list_t));
	if (!l)
		return (NULL);
	l->str = strdup(str);
	l->len = len;
	l->next = (*head);
	(*head) = l;

	return (*head);
}
