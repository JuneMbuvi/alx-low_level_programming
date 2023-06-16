#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min values
 * @max: max values
 * Return: p
 */
int *array_range(int min, int max)
{
	int *p;
	int size = max - min + 1;
	int i = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int *) * size);
	if (!p)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
