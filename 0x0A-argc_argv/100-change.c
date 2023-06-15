#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i = 1, cents;
	int coins;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[i]);
	if (coins[i] < 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (i % 25)
			cents = 25;
		if (i % 10)
			cents = 10;
		if (i % 5)
			cents = 5;
		if (i % 2)
			cents = 3;
		if (i % 1)
			cents = 1;
	}
	return (cents);
}
