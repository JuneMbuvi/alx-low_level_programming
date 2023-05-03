#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: head pointer
 * @idx: index
 * @n: int under study
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (!temp || !temp->next)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

