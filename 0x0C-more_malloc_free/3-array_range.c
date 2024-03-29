#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: On Success, a pointer to the newly created array
 * On failure, returns NULL.
 */

int *array_range(int min, int max)
{
	int i;

	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}

	if (arr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
