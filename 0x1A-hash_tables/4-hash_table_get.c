#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: ptr to hash table
 * @key: key whose value is being searched for
 * Return: value on success, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*checks whether a key exists and returns corresponding value*/
	int index;
	hash_node_t *item = NULL;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
