#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: head ptr
 * Return: n
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		count++;
	}
	return (count);
}
