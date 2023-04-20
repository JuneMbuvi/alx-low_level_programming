#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
		printf(" ");
	}

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);

		printf("%d\n", j);
	}
	va_end(args);
	printf("\n");
}
