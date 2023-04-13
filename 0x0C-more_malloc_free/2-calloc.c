#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with bytes
 * @s: memeory to be occupied
 * @b: character being copied
 * @n: number of times to copy b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
