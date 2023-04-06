#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - prints a prime number
 * @n: integer
 * Return: 1 if n is a prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - prints a recursive prime number
 * @n: first integer
 * @i: second integer
 * Return: 1 if n is a prime number 0 otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
