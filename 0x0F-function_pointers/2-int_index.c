#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array being traversed
 * @size: size of array
 * @cmp: function pointer
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (!cmp || !array)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
