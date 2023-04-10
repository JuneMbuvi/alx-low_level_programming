#include "main.h"

/**
 * * _abs - function that gives the absolute value
 * @i: parameter being tested
 * Return: always i
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else
		i = i;
	return (i);
}
