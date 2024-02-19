#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer.
 * @b: pointer to a string of characters
 *
 * Return: On Success, the converted number.
 * 0 if there is one or more characters that are not 0 or 1 and if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d = 0;
	char c = '\0';

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];
		if (c != '0' && c != '1')
		{
			return (0);
		}
		d = 2 * d + (c - '0');
	}
	return (d);
}
