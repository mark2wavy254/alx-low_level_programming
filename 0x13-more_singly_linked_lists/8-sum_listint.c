#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: pointer to the first node
 *
 * Return: the sum of all the data.
 * 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	const listint_t *current = head;
	unsigned int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
