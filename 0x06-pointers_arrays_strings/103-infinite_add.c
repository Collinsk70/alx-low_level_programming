#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i = 0, j = 0;

	/* Calculate the lengths of the numbers */
	len1 = strlen(n1);
	len2 = strlen(n2);

	/* Check if the result can fit in the buffer */
	if (len1 + 1 >= size_r || len2 + 1 >= size_r)
		return (0);

	/* Add the numbers from right to left */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		sum %= 10;

		/* Check if the result can fit in the buffer */
		if (size_r <= 1 || (i + j + 2) >= size_r)
			return (0);

		/* Store the result digit */
		r[i + j + 1] = sum + '0';
	}

	/* Null-terminate the result */
	r[i + j + 1] = '\0';

	return (r);
}
