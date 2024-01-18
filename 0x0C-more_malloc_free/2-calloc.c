#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an arra using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of each element in the array.
 *
 * Return: On Success, a pointer to the allocated memory.
 * On failure, it returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size = nmemb * size;

	void *arr = malloc(total_size);

	memset(arr, 0, total_size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
