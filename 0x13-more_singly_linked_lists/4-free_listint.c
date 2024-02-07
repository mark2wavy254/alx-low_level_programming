#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first node
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
