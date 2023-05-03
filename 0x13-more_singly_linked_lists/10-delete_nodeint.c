#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of listint_t
 * @head: head pointer
 * @index: index
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy = *head;
	unsigned int i;

	if (!cpy)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (!cpy->next)
			return (-1);
		cpy = cpy->next;
	}
	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}

