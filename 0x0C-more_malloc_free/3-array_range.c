#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 *
 * Return: Pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}

