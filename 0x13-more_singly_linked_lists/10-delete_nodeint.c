#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - Deletes the node at istint_t linked list.
 * @head: A pointer to the pointer to the head of the listint_t list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	/* If index is 0, delete the first node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node before the desired index */
	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	/* If current is NULL or current->next is NULL, ths out of bounds */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node at the desired index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

