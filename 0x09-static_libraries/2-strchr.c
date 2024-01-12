#include "main.h"

/**
 * _strchr - entry point
 * @c: character to be located
 * @s: string where the character is located
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
