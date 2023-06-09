#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: pointer to name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;

	f(name);
}
