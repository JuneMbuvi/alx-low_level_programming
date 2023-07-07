#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: integer being printed
 * @m: integer being printed
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int val = n ^ m, mask;

	for (i = 63; i >= 0; i--)
	{
		mask = val >> i;
		if (mask & 1)
		{
			count++;
		}
	}
	return (count);
}
