#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: ptr to head ptr
 * @n: data
 * Return: adress of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/*2 conditions: if the list was previously empty, first=last*/
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	/*if list was not empty and head != NULL*/
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
