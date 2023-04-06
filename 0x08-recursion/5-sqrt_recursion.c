#include "main.h"
/**
 *  _sqrt_recursion - prints squareroot of a number
 *  @n: integer
 *  Return: actual_sqrt_recursion(n)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n));
}
/**
 *  actual_sqrt_recursion - prints natural squarerrot of a number
 *  @n: first integer
 *  @i: second integer
 *  Return: actual_sqrt_recursion(n, i + 1)
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == 0)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
