#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: pointer for character
 * @f: pointer for function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
