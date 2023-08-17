#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at nth idx
 * @head: head ptr
 * @index: position of node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
