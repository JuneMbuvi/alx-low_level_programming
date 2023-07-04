#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all data of a list
 * @head: head pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
