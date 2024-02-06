#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list
 * @h: pointer to a list
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		count++;
	}
	return (count);
}
