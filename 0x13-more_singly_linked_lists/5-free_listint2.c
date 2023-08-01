#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to the pointer to the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL)
		return;

	/* Traverse the list and free each node */
	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);

		current = next_node;
	}

	/* Set the head pointer to NULL to indicate an empty list */
	*head = NULL;
}

