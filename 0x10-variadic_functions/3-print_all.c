#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints everything passed to it
 * @format: pointer of different datatypes being passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *separator = "";
	char *p;

	va_start(list, format);
	if (format)
	{
		while (format)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 's':
					p = va_arg(list, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", separator, p);
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
