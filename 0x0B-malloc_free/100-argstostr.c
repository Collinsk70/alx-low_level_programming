#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: Pointer to the concatenated string, or NULL if ac is 0 or av is NULL
 *         or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k, total_length = 0;

	/* Check for invalid number of arguments or NULL pointer */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* Account for the new line character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	/* Copy the arguments to the concatenated string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n'; /* Add new line character */
	}
	concatenated[k] = '\0'; /* Add null terminator */

	return (concatenated);
}

