#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	/* Traverse the list and add the data of each node to the sum */
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

