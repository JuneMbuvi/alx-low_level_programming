#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table ptr
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *temp;
	hash_table_t *h = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				temp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = temp;
			}
		}
	}
	free(h->array);
	free(h);
}
