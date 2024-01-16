#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialiazes it with a
 * specific char.
 * @size: size of the array
 * @c: character input
 *
 * Return: On success, pointer to the array.
 * On error, returns NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(size * sizeof(char));

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
