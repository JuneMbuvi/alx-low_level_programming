#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer of type char
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int m;

	if (!b)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		d = 2 * d + (b[m] - '0');
	}
	return (d);
}
