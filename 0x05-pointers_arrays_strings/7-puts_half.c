#include "main.h"
/**
 * puts_half - prints last half of the function
 * @str: string being printed
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j, longi;

	longi = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
		longi++;
	j = (longi / 2);
	if ((longi % 2) == 1)
		j = ((longi + 1) / 2);
	for (i = j ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
