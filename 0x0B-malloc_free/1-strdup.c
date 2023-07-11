#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 *           string str
 * @str: the string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if
 *         memory allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return NULL;

	/* Calculate the length of the string */
	for (length = 0; str[length] != '\0'; length++)
		;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return NULL;

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return duplicate;
}

