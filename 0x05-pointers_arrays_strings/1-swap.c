#include "main.h"
/**
 * swap_int - function that swaps the value of 2 integers
 * @a: first integer to swap
 * @b: second integer to swap
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
