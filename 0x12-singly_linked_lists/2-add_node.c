#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at
 * the beginning of a linked list
 * @head: The double pointer to the list_t list
 * @str: A new string to add in the node
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
