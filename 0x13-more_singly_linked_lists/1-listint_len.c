#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: The number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
