#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value sequentially
 * @array: array with the value being searched for
 * @size: size of array
 * @value: value being looked for
 * Return: value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			return (i);
		}
	}
	return (-1);
}
