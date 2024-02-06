#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
