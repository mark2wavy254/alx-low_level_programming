#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a given number
 * @n: number to find the square root of
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the natural square root of a given number
 * @n: number to find the square root of.
 * @m: iterator.
 *
 * Return: natural square root of a number
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (actual_sqrt_recursion(n, (m + 1)));
	}
}
