#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer under study
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	if (n == 0)
		return (0);
	va_end(args);
	return (sum);
}
