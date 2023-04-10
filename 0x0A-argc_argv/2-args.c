#include <stdio.h>
#include "main.h"

/**
 * main - prints the arguments in the function
 * @argc: arguments passed
 * @argv: arguments in an array
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
