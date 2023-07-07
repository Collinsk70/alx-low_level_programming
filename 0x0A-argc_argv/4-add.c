#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * is_positive_number - checks if a string is a positive number
 * @str: string to check
 *
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

