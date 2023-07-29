#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t linked list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Create a new node and allocate memory for it */
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/* Duplicate the input string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse to the end of the list and add the new node */
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}

