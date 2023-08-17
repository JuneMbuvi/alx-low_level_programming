#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at idx
 * @h: head ptr
 * @idx: index
 * @n: data
 * Return: address on success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = *h;
	unsigned int i = 1;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		if (temp != NULL)
		{
			while (temp->prev != NULL)
				temp = temp->prev;
		}
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new = add_dnodeint_end(h, n);
			}
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = head->next;
					new->prev = temp;
					temp->next->prev = new;
					temp->next = new;
				}
			}
			break;
		}
		temp = temp->next;
		i++;
	}
	return (new);
}
