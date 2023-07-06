#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clears bit
 * @n: pointer
 * @index: position
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
