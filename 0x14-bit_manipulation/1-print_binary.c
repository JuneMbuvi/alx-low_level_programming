#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: integer to be printed
 * Return: nth
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;
		if (mask & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
