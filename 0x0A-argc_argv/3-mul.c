#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
