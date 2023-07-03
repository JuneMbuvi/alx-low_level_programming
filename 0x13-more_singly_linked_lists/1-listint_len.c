#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: head pointer
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (!h)
			return (-1);
		h = h->next;
		count++;
	}
	return (count);
}
