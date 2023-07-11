#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	array[size] = '\0'; /* Add a null terminator at the end */

	return (array);
}

