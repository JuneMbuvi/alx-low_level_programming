#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a node at the beginning of list
 * @head: pointer to head pointer
 * @str: string to be duplicated
 * Return: (*head)
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;/*list_t is a variable*/

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *(head);
	*(head) = new;
	return (*head);
}
