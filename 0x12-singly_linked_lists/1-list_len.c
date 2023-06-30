#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints no. of elements
 * @h: pointer to first node
 * Return: count
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);

}
