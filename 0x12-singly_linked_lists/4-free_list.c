#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: None (void).
 */
void free_list(list_t *head)
{
	list_t *current;

	/* Traverse the linked list and free each node */
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

