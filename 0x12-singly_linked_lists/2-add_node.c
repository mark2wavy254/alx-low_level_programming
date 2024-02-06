#include "lists.h"
#include <stdio.h>
#include <stdlin.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the head node of the list
 * @str: pointer to a character constant
 *
 * Return: On Success, the address of the new element.
 * On failure, returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t node *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
