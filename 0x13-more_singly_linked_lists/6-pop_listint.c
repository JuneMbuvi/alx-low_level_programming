#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *  pop_listint - deletes head node
 *  @head: head pointer
 *  Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = (*head);
	(*head) = (*head)->next;
	free(temp);
	temp = NULL;

	return ((*head)->n);
}
