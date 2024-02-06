#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
