#include "main.h"

/**
 * is_prime_number - evaluates whether a number is prime or not
 * @n: integer value
 *
 * Return: 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively determines if a number is prime
 * @n: integer
 * @i: iterator
 *
 * Return: 0.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
