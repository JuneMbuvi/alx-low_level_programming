#include <stdio.h>
#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: number flipped
 * @m: second number
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}
	return (b);
}
