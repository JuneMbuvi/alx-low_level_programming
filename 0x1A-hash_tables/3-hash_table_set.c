#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: string being searched for
 * @value: value of subsequent key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;

	if (!ht || !key)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	/*check whether the key already exists*/
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	/*collision handling. Adding new node at beginning of list*/
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
