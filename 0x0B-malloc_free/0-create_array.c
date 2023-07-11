#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;

	char *array = malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return NULL;

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	array[size] = '\0'; /* Add a null terminator at the end */

	return array;
}

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}

