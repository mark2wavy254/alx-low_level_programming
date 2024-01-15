#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initiliazes with a sepcific
 * char.
 * @c: input
 * @size: size of array.
 *
 * Return: 0 on Success.
 * On failure, return NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
