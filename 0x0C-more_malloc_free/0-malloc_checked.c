#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer under study
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int *) * b);
	if (!p)
	{
		return (NULL);
		exit(98);
	}
	return (p);
}
