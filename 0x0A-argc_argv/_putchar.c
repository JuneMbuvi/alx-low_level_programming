#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints charcter c
 * @c: character being tested
 * Return: 1 on success
 * and -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
