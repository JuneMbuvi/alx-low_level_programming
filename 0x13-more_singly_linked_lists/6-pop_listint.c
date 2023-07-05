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
	int count = 0;

	if (*head == NULL || !head)
		return (0);
	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
