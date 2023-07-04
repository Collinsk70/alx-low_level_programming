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

	while (*s)
	{
		found = 0;

		/* Check if the current character is present in accept */
		while (*accept)
		{
			if (*accept == *s)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (found)
			length++;
		else
			break;

		s++;
	}

	return (length);
}

