#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints contents of a hash table
 * @ht: ptr to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			/*printf(" [%lu]:", i);*/
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
