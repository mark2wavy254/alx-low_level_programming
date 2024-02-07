#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first node
 * @idx: index where the node should be inserted
 * @n: integer value
 *
 * Return: the address of the new node.
 * On failure, NULL is returned.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count = 0;
	listint_t *current = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (*head == NULL || idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || count != idx - 1)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
