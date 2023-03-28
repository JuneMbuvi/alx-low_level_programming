#include "main.h"
#include <stddef.h>

/**
 * *_strcpy - copies string src to dest
 * @dest: final destination
 * @src: initial destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != 0 ; i++)
		dest[i] = src[i];
	return (dest);
}
