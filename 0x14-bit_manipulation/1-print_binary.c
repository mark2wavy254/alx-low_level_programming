#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: integer value
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int c;
	int i, count = 0;

	for (i = 15; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}

		if (!count)
		{
			_putchar('0');
		}
	}
}
