#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets node at nth index
 * @head: head pointer
 * @index: index of node starting at 0
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;
	int n;

	if (!head)
		return (NULL);

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			ptr->n = n;
		}
		count++;
		ptr = ptr->next;
	}
	return (ptr);
}
