#include "main.h"

/**
 * _pow_recursion - returns the value of an integer raised to a certain power
 * @x: integer value
 * @y: power value
 *
 * Return: value of raised integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
