#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of the string in the parameter.
 * @str: input.
 *
 * Return: On success, a pointer to the duplicated string.
 * If insufficient memory was available, returns NULL.
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size = strlen(str);
	char *new = malloc(size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new[i] = str[i];
	}

	return (new);
}
