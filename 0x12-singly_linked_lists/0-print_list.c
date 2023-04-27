#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  print_list - prints all elements in list_t
 *  @h: pointer for list_t
 *  Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%u%s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
