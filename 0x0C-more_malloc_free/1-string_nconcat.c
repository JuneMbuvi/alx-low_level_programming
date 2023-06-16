#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of new string
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int i = 0;

	/*n = len1 + len2 + 1;*/

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (n >= len2)
		n = len1 + len2 + 1;
	else if (n < len2)
	{
		p = malloc(sizeof(char) * n);
		if (!p)
			return (NULL);
		for (i = 0; i < len1 ; i++)
			p[i] = s1[i];
		for (i = 0; i < len2; i++)
			p[len1 + i] = s2[i];
		p[len1 + len2] = '\0';
	}
	return (p);
}
