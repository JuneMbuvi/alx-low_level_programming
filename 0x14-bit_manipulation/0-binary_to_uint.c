#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to str
 * Return: converted number(i)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, k = 1, len;
	int i;

	len = strlen(b);

	if (!b)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			j += k;
		}
		k *= 2;
	}
	return (j);
}
