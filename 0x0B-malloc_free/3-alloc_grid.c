#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: ooh
 */
int **alloc_grid(int width, int height)
{
	int **ooh;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ooh = malloc(sizeof(int *) * height);

	if (ooh == NULL)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		ooh[i] = malloc(sizeof(int) * width);
		if (ooh[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ooh[i]);
			free(ooh);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			ooh[i][j] = 0;
	}
	return (ooh);
}


