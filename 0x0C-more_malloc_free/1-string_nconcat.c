#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: integer input
 *
 * Return: On Success, a pointer to a newly allocated space in memory
 * which contains s1, the first n bytes of s2 and a null terminator.
 * On failure, NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *z = malloc(len1 + n + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (z == NULL)
	{
		return (NULL);
	}

	if (n > len2)
	{
		n = len2;
	}

	memcpy(z, s1, len1);
	memcpy(z + len1, s2, n);

	return (z);
}
