#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns number of nodes
 * @h: head ptr
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h != NULL)
			h = h->next;
		count++;
	}
	return (count);
}
