#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 * at the end of a linked list
 * @head: The double pointer to the list_t list
 * @str: The string to put in the new node
 * Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int leng = 0;

	while (str[leng])
		leng++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = leng;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
