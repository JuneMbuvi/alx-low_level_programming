#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL)
		return (-1);
	while (array[block - 1] < value && block < size)
	{
		printf("Value checked array[%lu] = %d\n", block - 1, array[block - 1]);
		prev = block;
		block += sqrt(size);
	}
	printf("Value checked array[%lu] = %d\n", block - 1, array[block - 1]);
	for (i = prev; i < block && i < size; i++)
	{
		printf("Value checked array[%lu] = %d\n", block - 1, array[block - 1]);
		if (array[i] == value)
		{
			printf("Value %d found at index %lu\n", value, i);
			return (i);
		}
	}
	return (-1);
}
