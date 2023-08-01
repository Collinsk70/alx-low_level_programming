#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth n
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The pointer to the nth node, or NULL if t
 */
listint_t *get_nodeint_at_index(listint_t *head, 
		unsigned int index)
{

	listint_t *current;

	unsigned int count = 0;

	/* Traverse the list to the desired index and */
	current = head;

	while (current != NULL && count < index)
	{
		current = current->next;

		count++;
	}

	/* If current is NULL, the node does not exist */
	if (current == NULL)
		return (NULL);

	return (current);
}

