#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the pointer to the head of the listint_t list.
 *
 * Return: The data (n) stored in the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (data);

	/* Save the data from the head node */
	data = (*head)->n;

	/* Delete the head node and update the head pointer */
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}

