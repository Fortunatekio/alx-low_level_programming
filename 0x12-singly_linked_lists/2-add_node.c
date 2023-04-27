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
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
