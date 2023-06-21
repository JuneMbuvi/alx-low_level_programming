#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer of array of integers
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
