#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: address of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht || size == 0)
		return (NULL);
	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
