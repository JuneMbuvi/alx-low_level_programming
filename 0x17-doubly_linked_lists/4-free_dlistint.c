#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head ptr
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
