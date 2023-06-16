#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array of nmemb elements
 * @nmemb: elements of arrays
 * @size: size to be allocated
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	/*unsigned int arr[];*/
	/*unsigned int i = 0;*/

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	/*for (i = 0; i < arr[i]; i++)*/
	return (p);
}
