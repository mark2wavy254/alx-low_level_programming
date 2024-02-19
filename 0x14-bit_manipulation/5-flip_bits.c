#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: integer value
 * @m: integer value
 *
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
		{
			count++;
		}
	}
	return (count);
}
