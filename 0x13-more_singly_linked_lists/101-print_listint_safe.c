#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * looped_listint_count - counts nodes
 * @head: head ptr
 * Return: 0
 */
size_t looped_listint_count(const listint_t *head)
{
	const listint_t *ptr, *ptr2;
	size_t nodes = 1;

	if (!head || head->next == NULL)
		return (0);
	ptr = head->next;
	ptr2 = (head->next)->next;

	while (ptr2)
	{
		if (ptr == ptr2)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				nodes++;
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			ptr = ptr->next;
			while (ptr != ptr2)
			{
				nodes++;
				ptr = ptr->next;
			}
			return (nodes);
		}
		ptr = ptr->next;
		ptr2 = (ptr2->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a linked list
 * @head: head ptr
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_listint_count(head);

	if (nodes == 0)
	{
		for (nodes = 0; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
