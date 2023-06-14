#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: t
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}
