#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 *
 * Return: On Success, a pointer to a newly allocated space in memory with
 * the contents of s1 and s2.
 * On failure, return NULL.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	size_t total_len = len1 + len2 + 1;

	char *new = malloc(total_len);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (new == 0)
	{
		return (NULL);
	}

	strcpy(new, s1);
	strcpy(new + len1, s2);

	return (new);
}
