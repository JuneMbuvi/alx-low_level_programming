#include "main.h"

/**
 * _isupper - tests whether a character is uppercase
 * @c: parameter being tested
 * Return: 1 if uppercase
 * and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
