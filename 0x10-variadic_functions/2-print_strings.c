#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: pointer to a constant character
 * @n: integer value
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(st, const char *);

		printf("%s", str);

		if (str == NULL)
		{
			printf("(nil)");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(st);

	printf("\n");
}
