#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: double pointer to the first node.
 *
 * Return: The head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data = current->n;
	*head = current->next;
	free(current);
	return (data);
}
