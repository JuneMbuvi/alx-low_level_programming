#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at idx
 * @head: head ptr
 * @index: position
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *temp = *head;
	unsigned int i = 0;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				(*head) = temp->next;
				if ((*head) != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				new->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = new;
			}
			free(temp);
			return (1);
		}
		new = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
