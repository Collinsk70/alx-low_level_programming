#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer value to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(
	listint_t **head,
	unsigned int idx,
	int n
)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;

	/* If idx is 0, make the new node the head of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the node before the desired index */
	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/* If current is NULL, the index is not possible, so return NULL */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Attach the new node at the desired index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

