#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements in listint_t
 * @h: pointer for listint_t
 * Return: all nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (!h->n)
			printf("[0] (nil)");
		else
			printf("%u\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
