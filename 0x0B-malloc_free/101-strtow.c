#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int count_words(char *str);
int word_length(char *str);
void free_words(char **words);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if str is NULL or empty
 *         or if memory allocation fails
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, j, k, length, word_len;

	/* Check for NULL or empty string */
	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words */
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	/* Allocate memory for the array of words */
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Extract words from the string and store them in the array */
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word_len = word_length(&str[i]);
			words[j] = malloc((word_len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				free_words(words);
				return (NULL);
			}

			length = 0;
			for (k = i; k < (i + word_len); k++)
			{
				words[j][length] = str[k];
				length++;
			}
			words[j][length] = '\0';

			j++;
			i += word_len;
		}
		else
		{
			i++;
		}
	}

	words[j] = NULL; /* Add NULL as the last element of the array */

	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * word_length - computes the length of a word
 * @str: the string
 *
 * Return: Length of the word
 */
int word_length(char *str)
{
	int length = 0, i = 0;

	while (str[i] != '\0' && str[i] != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * free_words - frees the memory allocated for an array of words
 * @words: the array of words
 *
 * Return: Nothing
 */
void free_words(char **words)
{
	int i = 0;

	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}

	free(words);
}

