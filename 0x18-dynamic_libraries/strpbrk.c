#include "main.h"

/**
 * * _strpbrk - searches for a string for any set of bytes
 * @s: first pointer
 * @accept: second pointer
 * Return: '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
