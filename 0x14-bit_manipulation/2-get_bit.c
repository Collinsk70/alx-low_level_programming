#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long int number.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* Check*/
		return (-1);

	return ((n >> index) & 1); /* Right-t value */
}

