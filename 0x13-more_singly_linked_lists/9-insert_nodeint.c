#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: pointer to head pointer
 * @idx: index of the list where the new node should be added
 * @n: data in the node
 * Return: ptr2 if successful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *ptr2;
	unsigned int i = 0;

	ptr2 = malloc(sizeof(listint_t));

	if (!ptr2 || !head)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = (*head);
		(*head) = ptr2;
		return (ptr2);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ptr2->next = ptr->next;
			ptr->next = ptr2;
			return (ptr2);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
