#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer value
 * @index: the index
 *
 * Return: On Success, the value of the bit at index.
 * -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
	{
		return (-1);
	}

	b = (n >> index) & 1;

	return (b);
}
