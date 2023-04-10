#include "main.h"

/**
 * * _strchr - locates a charecter inside a string
 * @s: pointer
 * @c: character being tested
 * Return: &s[i]
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
