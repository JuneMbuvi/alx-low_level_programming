#include "main.h"

/**
 * _isdigit - tests whether a value is a digit
 * @c: parameter being tested
 * Return: 1 if a digit
 * and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
