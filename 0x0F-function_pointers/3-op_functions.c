#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of two integers
 * @a: integer value
 * @b: ineger value
 *
 * Return: Sum of two integers.
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts two integers
 * @a: integer value
 * @b: integer value
 *
 * Return: Difference of two integers
 */

int op_sub(int a, int b)
{
	int dif;

	dif = a - b;

	return (dif);
}

/**
 * op_mul - multiplies two integers
 * @a: integer value
 * @b: integer value
 *
 * Return: the product of two integers
 */

int op_mul(int a, int b)
{
	int prod;

	prod = a * b;

	return (prod);
}

/**
 * op_div - divides two integers
 * @a: integer value
 * @b: integer value
 *
 * Return: the result of the division.
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
 * op_mod - calculates the modulo of two integers
 * @a: integer value
 * @b: integer value
 *
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	int z;

	z = ((a / b) % 10);

	return (z);
}
