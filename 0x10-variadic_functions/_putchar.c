#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be written
 *
 * Return: 0 Always.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
