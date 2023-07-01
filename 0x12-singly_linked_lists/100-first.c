#include <stdio.h>
#include "lists.h"
/**
 * printstr - prints a str
 * Return: nothing
 */
void printstr(void) __attribute__((constructor));
void printstr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
