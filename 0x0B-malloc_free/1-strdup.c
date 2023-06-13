#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strdup - duplicates a string and returns a pointer
 * @str: pointer
 * Return: pointer on success
 */
char *_strdup(char *str)
{
	unsigned int size;
	int i, j;
	char *t;

	size = 0;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	t = malloc(sizeof(char) * size + 1);
	if (!t)
		return (NULL);
	for (j = 0; str[j]; j++)
		t[j] = str[j];
	return (t);
}
