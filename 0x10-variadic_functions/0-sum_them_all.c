#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums parameters passed to it
 * @n: integer value
 *
 * Return: the sum.
 * 0 if n is equal to zero.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sm;
	unsigned int i;
	int sum;

	va_start(sm, n);

	sum = 0;
	
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sm, int);
	}

	va_end(sm);
	return (sum);
}
