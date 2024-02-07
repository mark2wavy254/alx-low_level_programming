#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the first node
 * @index: index of the node that should be deleted.
 * 
 * Return: On Success, 1.
 * On failure, -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *temp = current->next;

	if (*head == NULL || index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		if (temp != NULL)
		{
			free(temp);
		}
		return (1);
	}

	while (current != NULL && count < index -1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || count != index - 1)
	{
		return (-1);
	}
	
	temp = current->next;
	current->next = temp->next;
	free(temp);
	
	return (1);
}
