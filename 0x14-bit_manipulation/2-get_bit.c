#include <stdio.h>
#include "main.h"
/**
 * get_bit - gets bit at an index
 * @n: integer being tested
 * @index: index giving the nth position
 * Return: mask
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);
	mask = (n >> 1) & 1;
	return (mask);
}
