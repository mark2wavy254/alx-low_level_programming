#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: input.
 *
 * Return: On Success, a pointer to the allocated memory.
 * On failure, exit with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	int *s = malloc(sizeof(int) * b);

	if (s == 0)
	{
		exit(98);
	}

	return (s);
}
