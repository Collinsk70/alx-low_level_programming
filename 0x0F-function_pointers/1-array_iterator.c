#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each array element
 * @array: Pointer to the array
 * @size: The size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * This function takes an array
 * It then applies the specified function to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
