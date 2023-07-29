#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * create_node - Creates a new node with a given string value.
 * @str: The string value to be assigned to the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
list_t *create_node(char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = str;
		new_node->next = NULL;
	}
	return (new_node);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Create a sample linked list */
	list_t *head = create_node("Hello");
	head->next = create_node("world");
	head->next->next = create_node("from");
	head->next->next->next = create_node("the");
	head->next->next->next->next = create_node("linked");
	head->next->next->next->next->next = create_node("list");

	/* Print all elements of the list and get the node count */
	size_t node_count = print_list(head);
	printf("Total nodes in the list: %zu\n", node_count);

	/* Free the memory allocated for the linked list */
	list_t *current = head;
	while (current != NULL)
	{
		list_t *temp = current;
		current = current->next;
		free(temp);
	}

	return (0);
}

