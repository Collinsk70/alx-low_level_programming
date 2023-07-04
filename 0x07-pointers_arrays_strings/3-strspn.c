#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The characters to include in the prefix substring
 *
 * Return: The number of bytes in the initial segment of s that consist only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *accept_ptr;

	while (*s)
	{
		found = 0;
		accept_ptr = accept;

		while (*accept_ptr)
		{
			if (*accept_ptr == *s)
			{
				found = 1;
				break;
			}
			accept_ptr++;
		}

		if (!found)
			break;

		length++;
		s++;
	}

	return (length);
}

