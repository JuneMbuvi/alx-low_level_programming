#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: pointer
 * @index: position
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);

	return (1);
}
