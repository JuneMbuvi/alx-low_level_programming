#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node at the end
 * @head: pointer to head which points to first node
 * @str: string to be duplicated
 * Return: new address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *temp = *head;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;

	new->next = NULL;
	if (*head == NULL)
	{
		*(head) = new;
		return (new);

	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
