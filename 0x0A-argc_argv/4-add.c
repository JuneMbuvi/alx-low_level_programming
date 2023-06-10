#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * my_isdigit_fn - checks whether a value is a digit
 * @str: string being assessed
 * Return: 1
 */
int my_isdigit_fn(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result = 0;
	int convert_str_to_int;

	i = 1;
	while (i < argc)
	{
		if (my_isdigit_fn(argv[i]))
		{
			convert_str_to_int = atoi(argv[i]);
			result = result + convert_str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
