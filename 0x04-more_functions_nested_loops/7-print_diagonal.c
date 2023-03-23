#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter being tested
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; i <= n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
