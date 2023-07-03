#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements in a list
 * @h: head pointer
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (!h)
			printf("(nil)");
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		count++;
	}
	return (count);
}
