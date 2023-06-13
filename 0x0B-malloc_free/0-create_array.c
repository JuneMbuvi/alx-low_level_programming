#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size to be allocated
 * @c: character to be initialized
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || !s)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
