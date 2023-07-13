#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 *         or NULL if the allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;

	concat_str = malloc(sizeof(char) * (concat_len + 1));

	if (concat_str == NULL)
		return (NULL);

	strncpy(concat_str, s1, len1);
	strncpy(concat_str + len1, s2, n);
	concat_str[concat_len] = '\0';

	return (concat_str);
}

