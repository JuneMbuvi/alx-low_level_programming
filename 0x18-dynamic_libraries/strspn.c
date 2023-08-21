#include "main.h"
#include <stdio.h>
/**
 * * _strspn - gets the length of a prefix of a substring
 * @s: first pointer
 * @accept: second pointer
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
