#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: The cmp function does not return 0.
 *         If no element matches or size is <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
