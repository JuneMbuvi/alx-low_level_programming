#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string being printed
 * Return: 0
 */

void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *j = str;
	int m;

	while (*j != '\0')
	{
		j++;
		longi++;
	}
	i = longi - 1;
	for (m = 0 ; m <= i ; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}
