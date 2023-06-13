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
	int i, j;
	char *t;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	t = malloc(sizeof(char) * (i + 1));
	if (!t)
		return (NULL);
	for (j = 0; str[j]; j++)
		t[j] = str[j];
	return (t);
}
