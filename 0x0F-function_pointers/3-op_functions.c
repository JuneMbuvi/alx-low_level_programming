#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first int
 * @b: second int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of a and b
 * @a: first int
 * @b: second int
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of a and b
 * @a: first int
 * @b: second int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
