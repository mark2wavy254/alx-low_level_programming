#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to a constant character
 * @n: integer value
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(ar, int);

		printf("%d", num);

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ar);

	printf("\n");
}
