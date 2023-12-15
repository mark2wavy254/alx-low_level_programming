#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * @a: input
 * @b: input
 *
 * Return: 0.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: input
 * @b: input
 *
 * Return: 0.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: input
 * @b: input
 *
 * Return: 0.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: input
 * @b: input
 *
 * Return: 0.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of division of two integers
 * @a: input
 * @b: input
 *
 * Return: 0.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
