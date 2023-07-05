#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: head pointer
 * @index: position variable
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*current will always pt to the node we want to delete*/
	/*previous ptr must pt to the node before the one we want to delete*/

	listint_t *previous = *head, *current = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			previous = current; /*updating previous by value in current e.g 1000*/
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
