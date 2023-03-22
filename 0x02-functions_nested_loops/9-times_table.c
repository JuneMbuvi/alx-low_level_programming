#include "main.h"

/**
 * times_table - function that give the times table for digit 9
 * Return: always 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
