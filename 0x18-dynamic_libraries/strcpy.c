#include "main.h"

/**
 * *_strcpy - copies string src to dest
 * @dest: final destination
 * @src: initial destination
 * Return: des
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
		i++;
	for (j = 0 ; j < i ; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}
